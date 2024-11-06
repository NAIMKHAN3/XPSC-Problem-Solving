#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    vector<int> vec;
    set<pair<int, int>> st;
    multiset<pair<int, int>> mst;
    int cus = 1;
    while (q--)
    {

        int x, y;
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            st.insert({cus, y});
            mst.insert({y, -cus});
            cus++;
        }
        else if (x == 2)
        {
            int pos = st.begin()->first, v = st.begin()->second;
            vec.push_back(pos);
            mst.erase({v, -pos});
            st.erase(st.begin());
        }
        else
        {
            int pos = mst.rbegin()->second, v = mst.rbegin()->first;
            vec.push_back(pos * -1);
            mst.erase(--mst.end());
            st.erase({pos * -1, v});
        }
    }
    for (auto val : vec)
    {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}