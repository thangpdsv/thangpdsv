#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

// insertion sort
void insertionSort(vector<int> &listObject)
{
    for (int i = 1; i < listObject.size(); i++)
    {
        int key = listObject[i];
        int j = i - 1;
        while (j >= 0 && listObject[j] > key)
        {
            listObject[j + 1] = listObject[j];
            j--;
        }
        listObject[j + 1] = key;
    }
}

int main()
{
    vector<int> listObject;
    unordered_map<int, bool> objOnline;
    bool isSort=false;
    // input: 1 2 cin input objOnline and push into listOnline
    while (true)
    {
        int cmd, idOnline;
        cin >> cmd >> idOnline;
        if (cmd == 0)
            break;

        if (cmd == 1)
        {
            if (objOnline[idOnline] == 0)
            {
                objOnline[idOnline] = true;
                listObject.push_back(idOnline);
                // insertionSort(listObject);
                isSort=true;
            }
            // insertion sort objOnline
        }
        else
        {
            // cout index of idOnline
            // find index of idOnline in listObject
            // show listObject
            if(isSort){
                insertionSort(listObject);
                isSort=false;
            }
            auto it = find(listObject.begin(), listObject.end(), idOnline);
            if(it != listObject.end()){
                cout << it - listObject.begin() + 1 << endl;
            }else{
                cout << 0 << endl;
            }
        }
    }

    return 0;
}