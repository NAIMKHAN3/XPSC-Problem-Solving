#include <bits/stdc++.h>
using namespace std;

int solved(string s, int k)
{
    int n = s.length();
    int ans = -1;
    int i = 0;
    int j = 0;
    map<char, int> mp;
    while (j < n)
    {
        mp[s[j]]++;
        if (mp.size() == k)
        {
            ans = max(ans, j - i + 1);
        }
        else
        {
            while (mp.size() > k)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
            if (mp.size() == k)
            {
                ans = max(ans, j - i + 1);
            }
        }
        j++;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    cout << solved(s, k);

    return 0;
}