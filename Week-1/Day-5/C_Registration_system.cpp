#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    map<string, int> mp;
    while (q--)
    {
        string str;
        cin >> str;
        if (mp[str] >0)
        {
            cout << str << mp[str] << endl;
            mp[str]++;
        }
        else
        {
            cout << "OK" << endl;
            mp[str]++;
        }
    }
    return 0;
}