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
        int n, q;
        cin >> n >> q;
        map<int, vector<int>> mp;
        bool flag[n];
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].push_back(i);
        }
        for (int i = 1; i <= q; i++)
        {
            int x, y;
            cin >> x >> y;
            auto it = mp.find(x);
            auto it2 = mp.find(y);
            if (it == mp.end() || it2 == mp.end())
            {
                cout << "NO" << endl;
            }else if(mp[y][mp[y].size()-1]> mp[x][0]){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}