#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        int mn = INT_MAX;
        int mx = INT_MIN;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            mn = min(mn, v[i]);
            mx = max(mx, v[i]);
        }
        int gcd = v[0];
        for (int i = 1; i < n; ++i)
        {
            gcd = __gcd(gcd, v[i]);
        }

         bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0 && v[i] != gcd)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
