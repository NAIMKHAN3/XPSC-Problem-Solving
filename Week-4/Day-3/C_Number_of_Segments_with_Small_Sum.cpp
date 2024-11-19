#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = 0;
    long long ans = 0;
    long long sum = 0;
    while (j < n)
    {
        sum += arr[j];
        if (sum <= s)
        {
            ans += (j - i + 1);
        }
        else
        {
            while (sum > s && i <= j)
            {
                sum -= arr[i];
                i++;
            }
            if (sum <= s)
            {
                ans += (j - i + 1);
            }
        }
        j++;
    }
    cout << ans << '\n';
    return 0;
}