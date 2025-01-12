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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        vector<int> ps(n + 1);
        for (int i = 1; i <= n; i++)
        {
            ps[i] = ps[i - 1] + v[i - 1];
        }

        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(ps.begin(), ps.end(), x);
            if(it == ps.end()){
                cout << -1 << endl;
            }else{
                cout << it - ps.begin() << endl;
            }
        }
    }
    return 0;
}