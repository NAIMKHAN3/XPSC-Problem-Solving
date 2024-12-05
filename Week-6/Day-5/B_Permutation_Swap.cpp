#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

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
        long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            long diff = abs(i - x);
            ans = gcd(ans, diff);
        }
        cout << ans << endl;
    }
    return 0;
}