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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> s;
        int min = arr[0];
        s.push_back(min);
        int idx = n;
        for (int i = 1; i < n; i++)
        {
            if (min <= arr[i])
            {
                min = arr[i];
                s.push_back(min);
            }
            else
            {
                idx = i;
                break;
            }
        }
        vector<int> res;
        for (int i = idx; i < n; i++)
        {
            res.push_back(arr[i]);
        }
        for (int i = 0; i < s.size(); i++)
        {
            res.push_back(s[i]);
        }

        if (is_sorted(res.begin(), res.end()))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}