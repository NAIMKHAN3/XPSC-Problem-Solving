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
        string str;
        for (int i = 0; i < n; i++)
        {
            str += "BAN";
        }
        int i = 1;
        int j = str.size() - 1;
        int ans = 0;
        vector<pair<int, int>> v;
        while (i < j)
        {
            swap(str[i], str[j]);
            ans++;
            v.push_back({i, j});
            i += 3;
            j -= 3;
        }
        cout << ans << "\n";
        for (auto [x, y] : v)
        {
            cout << x + 1 << " " << y + 1 << "\n";
        }
    }
    return 0;
}