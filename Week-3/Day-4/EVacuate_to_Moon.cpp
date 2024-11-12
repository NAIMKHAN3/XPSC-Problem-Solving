#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, h;
        cin >> n >> m >> h;
        vector<long long int> v(n);
        vector<long long int> m2(m);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (long long int i = 0; i < m; i++)
        {
            cin >> m2[i];
        }
        long long int totalHours = 0;
        sort(v.begin(), v.end(), greater<long long int>());
        sort(m2.begin(), m2.end(), greater<long long int>());
        for (long long int i = 0; i < min(n,m); i++)
        {
            long long int charge = m2[i] * h;
            if (charge > v[i])
            {
                totalHours += v[i];
            }
            else
            {
                totalHours += charge;
            }
        }
        cout << totalHours << '\n';
    }
    return 0;
}