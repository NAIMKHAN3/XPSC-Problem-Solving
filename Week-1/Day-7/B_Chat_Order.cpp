#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string, bool>> user(n + 1);

    map<string, int> mp;
    for (int i = 1; i <= n; i++)
    {
        string x;
        cin >> x;
        auto it = mp.find(x);
        if (it == mp.end())
        {
            mp[x] = i;
            user[i] = {x, true};
        }
        else
        {
            user[it->second] = {x, false};
            user[i] = {x, true};
        }
    }
    map<string, bool> output;
    for (int i = n; i >= 1; i--)
    {
        auto it = output.find(user[i].first);
        if (it == output.end())
        {
            output[user[i].first] = true;
            if (user[i].second)
            {
                cout << user[i].first << "\n";
            }
        }
    }

    return 0;
}