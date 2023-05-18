#include <iostream>
#include <vector>

using namespace std;

void show(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int xDamage, yincreaseDamage, nNumCreep, mHealthCreep;

    cin >> xDamage >> yincreaseDamage >> nNumCreep >> mHealthCreep;

    int count = 0;
    int damage = xDamage;
    int health = mHealthCreep;

    while (nNumCreep > 0)
    {
        if (damage >= health)
        {
            nNumCreep--;
            health = mHealthCreep;
            damage += yincreaseDamage;
        }
        else
        {
            health -= damage;
        }
        count++;
    }

    cout << count << endl;

    return 0;
}
