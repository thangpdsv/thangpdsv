#include <stdio.h>
#include <pthread.h>

int x1, x2, x3, x4, x5, x6;  // Các biến đầu vào
int w, v, y, z, ans;  // Các biến tính toán
pthread_mutex_t mutex_v = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex_w = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex_y = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex_z = PTHREAD_MUTEX_INITIALIZER;

void* calculate_w(void* arg) {
    pthread_mutex_lock(&mutex_w);
    w = x1 * x2;
    pthread_mutex_unlock(&mutex_w);
    pthread_mutex_lock(&mutex_y);
    y = w * y;
    pthread_mutex_unlock(&mutex_y);
    pthread_exit(NULL);
}

void* calculate_v(void* arg) {
    pthread_mutex_lock(&mutex_v);
    v = x3 * x4;
    pthread_mutex_unlock(&mutex_v);
    pthread_mutex_lock(&mutex_y);
    y = v * x5;
    pthread_mutex_unlock(&mutex_y);
    pthread_mutex_lock(&mutex_z);
    z = v * x6;
    pthread_mutex_unlock(&mutex_z);
    pthread_exit(NULL);
}

void* calculate_ans(void* arg) {
    pthread_mutex_lock(&mutex_y);
    pthread_mutex_lock(&mutex_z);
    ans = y + z;
    pthread_mutex_unlock(&mutex_z);
    pthread_mutex_unlock(&mutex_y);
    printf("The result is: %d\n", ans);
    pthread_exit(NULL);
}

int main() {
    // Nhập giá trị cho các biến đầu vào
    printf("Enter values for x1, x2, x3, x4, x5, x6: ");
    scanf("%d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6);

    pthread_t thread_w, thread_v, thread_ans;

    // Tạo các thread cho từng phần tính toán
    pthread_create(&thread_w, NULL, calculate_w, NULL);
    pthread_create(&thread_v, NULL, calculate_v, NULL);

    // Chờ các thread w và v kết thúc
    pthread_join(thread_w, NULL);
    pthread_join(thread_v, NULL);

    // Tạo thread cho phần tính toán ans
    pthread_create(&thread_ans, NULL, calculate_ans, NULL);
    pthread_join(thread_ans, NULL);

    return 0;
}