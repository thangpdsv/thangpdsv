#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void qsort(int *a, int n){
    int i, j, l, r, x;
    int *b = new int [n];
    for(i = 0; i < n; i++) b[i] = a[i];
    l = 0; r = n - 1;
    x = b[(l + r) / 2];
    do{
        while(b[l] < x) l++;
        while(b[r] > x) r--;
        if(l <= r){
            int tmp = b[l];
            b[l] = b[r];
            b[r] = tmp;
            l++; r--;
        }
    }while(l <= r);
    for(i = 0; i < n; i++) a[i] = b[i];
    delete [] b;
}

int main(){
	std::ios_base::sync_with_stdio(false  );
	std::cin.tie(0);
	int n;
	cin >> n;
	int *a = new int [n];
	for(int i = 0; i < n; i++){
        	cin >> a[i];
	}
    qsort(a, n);
	for(int i = 0; i < n; i++) std::cout << a[i] << " ";
}