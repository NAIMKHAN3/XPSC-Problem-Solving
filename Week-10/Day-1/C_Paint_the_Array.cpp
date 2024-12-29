#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) { return (b == 0) ? a : gcd(b, a % b); }

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int x = 0, y = 0;
        for (long long int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                x = gcd(x, v[i]);
            }
            else if (i % 2 == 1)
            {
                y = gcd(y, v[i]);
            }
        }

        bool gx = true, gy = true;
        for (long long i = 0; i < n; i++)
        {
            if (i % 2 == 0 && v[i] % y == 0)
            {
                gy = false;
            }
            else if (i % 2 == 1 && v[i] % x == 0)
            {
                gx = false;
            }
        }

        if (gx)
        {
            cout << x << endl;
        }
        else if (gy)
        {
            cout << y << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}