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
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<long long> change;

        long long total = 0;
        int mnChange = 0;

        for (int i = 0; i < n; i++)
        {
            long long L = i;
            long long R = n - i - 1;
            if (s[i] == 'L')
            {
                if (R > L)
                {
                    mnChange++;
                    total += R;
                    change.push_back(R - L);
                }
                else
                {
                    total += L;
                }
            }
            else
            {
                if (L > R)
                {
                    mnChange++;
                    change.push_back(L - R);
                    total += L;
                }
                else
                {
                    total += R;
                }
            }
        }

        vector<long long> ans(n + 1);

        for (int i = mnChange; i <= n; i++)
        {
            ans[i] = total;
        }

        sort(change.begin(), change.end(), greater<long long>());

        for (int i = mnChange - 1; i >= 1; i--)
        {
            total -= change.back();
            change.pop_back();
            ans[i] = total;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}