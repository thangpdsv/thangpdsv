#include <iostream>
#include <vector>

using namespace std;

void show (vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}
//count the number of friends online with binary search
int countFriendOnline(vector<int> uOnline, vector<int> uFriendOnline)
{
    int count = 0;
    for (int i = 0; i < uFriendOnline.size(); i++)
    {
        int left = 0;
        int right = uOnline.size() - 1;
        int mid = (left + right) / 2;
        while (left <= right)
        {
            if (uOnline[mid] == uFriendOnline[i])
            {
                count++;
                break;
            }
            else if (uOnline[mid] > uFriendOnline[i])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
            mid = (left + right) / 2;
        }
    }
    return count;
}

int main()
{
    int m,n;
    cin >> m >> n;


    vector<int> uOnline(m);

    for (int i = 0; i < m; i++)
    {
        cin >> uOnline[i];
    }

    vector<int> uFriendOnline(n);
    for (int i = 0; i < n; i++)
    {
        cin >> uFriendOnline[i];
    }

    // show(uFriendOnline);
    // cout << "test" << endl;
    cout << countFriendOnline(uOnline, uFriendOnline);

    return 0;
}
