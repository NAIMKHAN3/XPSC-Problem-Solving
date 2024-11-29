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
        int n;
        cin >> n;
        map<int, int> mp;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            count = max(count, mp[x]);
        }

        int ans = 0;
        while (count < n)
        {
            int diff = min(count, n - count);
            ans += 1 + diff;
            count *= 2;
        }

        cout << ans << endl;
    }
    return 0;
}