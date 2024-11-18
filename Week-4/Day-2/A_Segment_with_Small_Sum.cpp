#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, s;
    cin >> n >> s;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0;
    long long sum = 0;
    long long i = 0;
    long long j = 0;
    while (j < n)
    {
        sum += a[j];
        if (sum <= s)
        {
            ans = max(ans, j - i + 1);
        }
        else
        {
            sum -= a[i];
            i++;
        }
        j++;
    }
    cout << ans << endl;
    return 0;
}