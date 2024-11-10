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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int ans = v[n - 1] - v[2];

        ans = min(ans, v[n - 2] - v[1]);
        ans = min(ans, v[n - 3] - v[0]);

        cout << ans << endl;
    }
    return 0;
}