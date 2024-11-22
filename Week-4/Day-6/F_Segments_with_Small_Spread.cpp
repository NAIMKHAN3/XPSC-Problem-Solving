#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long ans = 0;
    int i = 0, j = 0;
    multiset<long long> mt;
    while (j < n)
    {
        mt.insert(v[j]);
        long long mn = *mt.begin();
        long long mx = *mt.rbegin();
        if (mx - mn <= k)
        {
            ans += (j - i + 1);
        }
        else
        {
            while (i <= j)
            {
                mn = *mt.begin();
                mx = *mt.rbegin();
                if (mx - mn <= k)
                {
                    break;
                }

                mt.erase(mt.find(v[i]));
                i++;
            }
            mn = *mt.begin();
            mx = *mt.rbegin();
            if (mx - mn <= k)
            {
                ans += (j - i + 1);
            }
        }
        j++;
    }
    cout << ans << "\n";

    return 0;
}