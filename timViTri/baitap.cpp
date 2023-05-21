#include <iostream>
#include <vector>
#include <unordered_map>
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
//Using a hash table
vector<int> findIndices(const vector<int>& arr, const vector<int>& res) {
    unordered_map<int, int> hashTable;
    vector<int> indices;

    // Build the hash table
    for (int i = 0; i < arr.size(); i++) {
        hashTable[arr[i]] = i;
    }

    // Perform search for each element in 'res'
    for (int i = 0; i < res.size(); i++) {
        if (hashTable.count(res[i]) > 0) {
            indices.push_back(hashTable[res[i]]);
        } else {
            indices.push_back(-1);
        }
    }

    return indices;
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
    vector<int> indices = findIndices(arr, res);

    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << endl;
    }

    return 0;
}
