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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int d = -1;
        int ansD = -1;
        bool flag = false;
        for (int i = 0; i < n; i++)
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
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}