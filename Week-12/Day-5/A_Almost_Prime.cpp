#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    bool *p = new bool[n + 1];
    p[0] = 0;
    p[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        p[i] = 1;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (!p[i])
        {
            continue;
        }
        for (int m = 2 * i; m <= n; m += i)
        {
            p[m] = 0;
        }
    }

    vector<int> arr;
    for (int i = 2; i <= n; i++)
    {
        if (p[i])
        {
            arr.push_back(i);
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        int d = 0;
        for (int p = 0; p < arr.size(); p++)
        {
            if (i % arr[p] == 0)
            {
                d++;
            }
        }
        if (d == 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}