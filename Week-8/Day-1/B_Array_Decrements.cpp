#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> b(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        long long d = -1;
        long long ansD = -1;
        bool flag = false;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                flag = true;
                break;
            }
            if (b[i] != 0)
            {
                if (d == -1)
                {
                    d = a[i] - b[i];
                }
                else
                {
                    if (a[i] - b[i] != d)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            else
            {
                ansD = max(ansD, a[i] - b[i]);
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
            continue;
        }

        if (d == -1 || ansD <= d)
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