
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, char> mp;
    char c = 'a';
    for (int i = 1; i <= 26; i++)
    {
        mp[i] = c;
        c++;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string ans = "";
        for (int i = n - 1; i >= 0;)
        {
            if (s[i] == '0' && i - 1 >= 0 && s[i - 1] == '0')
            {
                int x = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                ans += mp[x];
                i -= 3;
            }
            else if (s[i] == '0')
            {
                int x = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                ans += mp[x];
                i -= 3;
            }
            else
            {
                ans += mp[s[i] - '0'];
                i--;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}