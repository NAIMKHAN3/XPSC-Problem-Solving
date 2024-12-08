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
        int n, k;
        cin >> n >> k;
       vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        map<int, int> mp;

        for(int i = 0; i < n; i++){
            mp[v[i]]++;
        } 

        int left = -1, right = -1;
        int tempLeft = -1, tempRight;
        for(int i = 0; i < n; i++){
            if (mp[v[i]] < k)
                continue;
            if (tempLeft == -1)
            {
                tempLeft = v[i];
            }
            if (i == n - 1 or v[i + 1] - v[i] > 1 or mp[v[i + 1]] < k)
            {
                tempRight = v[i];
                if (tempRight - tempLeft >= right - left)
                {
                    right = tempRight;
                    left = tempLeft;
                }
                tempLeft = -1, tempRight = -1;
            }
        }

       
        
        if (left == -1)
        {
           cout << -1 << endl;
        }
        else
        {
            cout << left << " " << right << endl;
        }
    }
    return 0;
}