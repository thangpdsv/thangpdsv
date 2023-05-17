#include <iostream>
#include <vector>
using namespace std;
void show(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// An optimized version of Bubble Sort
void bubbleSort(vector<int> &arr, int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // cout << "yes";
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // IF no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

// Function ranking the array
std::pair<int, int> findMaxAndRankMin(const std::vector<int>& arr) {
    int max = 0;
    int maxCount = 0;
    int min = arr[0];
    int rankMin = arr.size() + 1;
    
    for (size_t i = 0; i < arr.size(); i++) {
        int count = 0;
        
        // Find max
        for (size_t j = i; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (maxCount < count || (maxCount == count && max < arr[i])) {
            max = arr[i];
            maxCount = count;
        }
        
        // Find min
        if (min > arr[i]) {
            min = arr[i];
            rankMin = arr.size();
            continue;
        }
        
        if (min == arr[i]) {
            rankMin--;
        }
    }
    
    // std::cout << rankMin << std::endl;
    
    return std::make_pair(max, rankMin);
}

int main()
{
    int n;
    std::cin >> n; // Read the number of elements

    std::vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i]; // Read each number
    }

    // cout << "Before sort: " << endl;
    // show(numbers, n);

    bubbleSort(numbers, n);
    std::pair<int, int> result = findMaxAndRankMin(numbers);
    // cout << "After sort: " << endl;
    // show(numbers, n);
    std::cout << result.first << " " << result.second << std::endl;
    return 0;
}