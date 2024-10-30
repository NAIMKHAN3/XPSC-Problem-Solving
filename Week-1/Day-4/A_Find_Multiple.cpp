#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x, y, z;

    cin >> x >> y >> z;
    bool flag = false;
    for (int i = x; i <= y; i++)
    {
        if (i % z == 0)
        {
            cout << i << endl;
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << "-1" << endl;
    }

    return 0;
}