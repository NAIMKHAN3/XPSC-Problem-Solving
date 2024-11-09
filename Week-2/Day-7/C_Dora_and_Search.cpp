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

       vector<long long int> arr(n);
        set<long long int> st;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr[i] = val;
            st.insert(val);
        }
        long long int l = 0, r = n - 1;

        while (r - l > 1)
        {
            long long int mn = *st.begin(), mx = *st.rbegin();

            if (arr[l] != mn && arr[l] != mx && arr[r] != mn && arr[r] != mx)
            {
                break;
            }
            if (arr[l] == mn || arr[l] == mx)
            {
                l++;
                st.erase(arr[l - 1]);
            }
            if (arr[r] == mn || arr[r] == mx)
            {
                r--;
                st.erase(arr[r + 1]);
            }
        }
        if (r - l > 1)
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}