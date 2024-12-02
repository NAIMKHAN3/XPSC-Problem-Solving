#include <bits/stdc++.h>
using namespace std;

void solved()
{
    long long n;
    cin >> n;
    vector<long long> even;
    vector<long long> odd;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x % 2)
        {
            odd.push_back(x);
        }
        else
        {
            even.push_back(x);
        }
    }
    if (even.size() == 0 || odd.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    long long mx = odd.back();
    if (mx < even[0])
    {
        cout << even.size() + 1 << endl;
        return;
    }
    long long ans = 0;
    for (long long i = 0; i < even.size(); i++)
    {
        if (even[i] > mx)
        {
            cout << even.size() + 1 << endl;
            return;
        }
        else
        {
            ans++;
            mx += even[i];
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        solved();
    }
    return 0;
}