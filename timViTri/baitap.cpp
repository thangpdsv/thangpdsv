#include <iostream>
#include <vector>

using namespace std;

void show(vector<int> arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//find index of element in array using binary search
int findIndex(vector<int> arr, int x){
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
    
}


int main()
{

     int nArr;
    cin >> nArr;

    vector<int> arr(nArr);
    for (int i = 0; i < nArr; i++)
    {
        cin >> arr[i];
    }
    int mRes;
    cin >> mRes;
    vector<int> res(mRes);
    for (int i = 0; i < mRes; i++)
    {
        cin >> res[i];
    }
    for (int i = 0; i < nArr; i++)
    {
        cout << findIndex(arr, res[i]) << " ";
    }

    return 0;
}
