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
        int n, c;
        cin >> n >> c;
        vector<int> v(n);

        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }

        vector<pair<int, int>> tel;
        for (int i = 0; i < n; ++i)
        {
            tel.push_back({i + 1 + v[i], i + 1});
        }

        sort(tel.begin(), tel.end());

        int count = 0;
        for (auto &t : tel)
        {
            int total_cost = t.first;
            if (c >= total_cost)
            {
                c -= total_cost;
                count++;
            }
            else
            {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}