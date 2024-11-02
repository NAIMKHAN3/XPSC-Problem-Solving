#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string b;
        cin >> n >> b;
        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[b[i]]++;
        }
        string r;
        for (auto [key, value] : m)
        {
            r += key;
        }
        map<char, char> mp;
        int len = r.size();
        for (int i = 0; i < len; i++)
        {
            mp[r[i]] = r[len - 1 - i];
        }

        string ans;
        for (char ch : b)
        {
            ans += mp[ch];
        }
        cout << ans << endl;
    }

    return 0;
}
