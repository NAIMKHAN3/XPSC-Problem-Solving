#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string str = "abcdefghijklmnopqrstuvwxyz";
        map<char, int> mp;
        for (int i = 0; i < 26; i++)
        {
            mp[str[i]] = 0;
        }
        int n;
        cin >> n;
        string ans;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            for (auto [key, value] : mp)
            {
                if (value == x)
                {
                    ans += key;
                    mp[key]++;
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}