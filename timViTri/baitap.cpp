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
//find index of element in array using linear search
int findIndex(vector<int> arr, int x){
    for (int i = arr.size() -1 ; i >=0 ; i--)
    {
        // cout << i << " ";
        // cout << arr[i] << " ";
        // cout   << x << endl;
        if(arr[i] == x){
            return i;
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
    // show(arr);
    // show(res);
    // cout << arr[9];
        for (int i = 0; i < res.size(); i++)
    {
        cout << findIndex(arr, res[i]) << endl;
    }

    return 0;
}
