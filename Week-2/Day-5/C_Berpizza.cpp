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




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
        
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         int i = 0;
//         int j = n - 1;
//         int mn = 1;
//         int mx = n;
//         bool flag = false;
//         while (i < j)
//         {
//             if (v[i] != mn && v[i] != mx && v[j] != mn && v[j] != mx)
//             {
//                 flag = true;
//                 break;
//             }

//             if (v[i] == mn)
//             {
//                 mn++;
//                 i++;
//             }
//             else if (v[i] == mx)
//             {
//                 mx--;
//                 i++;
//             }
//             else if (v[j] == mn)
//             {
//                 mn++;
//                 j--;
//             }
//             else if (v[j] == mx)
//             {
//                 mx--;
//                 j--;
//             }
//         }

//         if (flag)
//         {
//             cout << mn << " " << mx << endl;
//         }
//         else
//         {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }
