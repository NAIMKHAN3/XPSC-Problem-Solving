#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i * i != n)
            {
                v.push_back(n / i);
            }
        }
    }

    if (k > v.size())
    {
        cout << "-1" << endl;
    }
    else
    {
        sort(v.begin(), v.end());
        cout << v[k - 1] << endl;
    }

    return 0;
}