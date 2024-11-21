#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, s;
    cin >> n >> s;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long i = 0, sum = 0, ans = 0;
    for (long long j = 0; j < n; j++)
    {
        sum += arr[j];

        while (sum > s && i <= j)
        {
            ans += (n - j); 
            sum -= arr[i];
            i++;
        }
    }

    cout << ans << '\n';

    return 0;
}
