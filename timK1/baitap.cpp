#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

std::vector<int> findNearestNumbers(std::vector<int>& arr, int k, int x) {
    // Tìm vị trí của x trong mảng
    int left = 0;
    int right = arr.size() - 1;
    int index = -1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            index = mid;
            break;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (index == -1) {
        index = right;
    }

    // Tìm k số gần x nhất
    left = index;
    right = index + 1;
    std::vector<int> result;

    while (k > 0) {
        if (left >= 0 && right < arr.size()) {
            if (x - arr[left] <= arr[right] - x) {
                result.push_back(arr[left]);
                left--;
            }
            else {
                result.push_back(arr[right]);
                right++;
            }
        }
        else if (left >= 0) {
            result.push_back(arr[left]);
            left--;
        }
        else if (right < arr.size()) {
            result.push_back(arr[right]);
            right++;
        }

        k--;
    }

    // Sắp xếp kết quả theo thứ tự tăng dần và ưu tiên số nhỏ hơn
    std::sort(result.begin(), result.end());

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int k, x;
    std::cin >> k >> x;

    std::vector<int> result = findNearestNumbers(arr, k, x);

    // In kết quả
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}