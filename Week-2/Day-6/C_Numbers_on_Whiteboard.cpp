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
        multiset<int, greater<int>> st;
        vector<pair<int, int>> v;
        for (int i = 1; i <= n; i++)
        {
            st.insert(i);
        }
        while (st.size() > 1)
        {
            int x = *st.begin();
            st.erase(st.begin());
            int y = *st.begin();
            st.erase(st.begin());
            v.push_back({x, y});
            double z = ceil((double)(x + y) / 2.0);
            st.insert(z);
        }
        cout << *st.begin() << endl;
        for (auto [value1, value2] : v)
        {
            cout << value1 << " " << value2 << endl;
        }
    }
    return 0;
}