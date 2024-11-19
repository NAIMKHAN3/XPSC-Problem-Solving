#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long  s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    int j = 0;
    int ans = INT_MAX;
    long long  sum = 0;
    sum += a[j];
    while (j < n)
    {

        if (sum >= s)
        {
            ans = min(ans, j - i + 1);
            sum -= a[i];
            i++;
        }
        else
        {
            j++;
            sum += a[j];
        }
    }
    cout << (ans == INT_MAX ? -1: ans) << "\n";
    return 0;
}