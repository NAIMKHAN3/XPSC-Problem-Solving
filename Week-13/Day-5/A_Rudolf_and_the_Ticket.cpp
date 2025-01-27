#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long t;
    cin >> t;
    while (t--)
    {
        long n, m, k;
        cin >> n >> m >> k;
        vector<long> v(n);
        for (long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long> a(m);
        for (long i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        long ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i] + a[j] <= k)
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}