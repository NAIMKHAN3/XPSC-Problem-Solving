#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, int> freq;
    int i = 0;
    long long ans = 0;
    int unique = 0;

    for (int j = 0; j < n; j++)
    {
        if (freq[a[j]] == 0)
        {
            unique++;
        }
        freq[a[j]]++;

        while (unique > k)
        {
            freq[a[i]]--;
            if (freq[a[i]] == 0)
            {
                unique--;
            }
            i++;
        }

        ans += (j - i + 1);
    }

    cout << ans << "\n";
    return 0;
}
