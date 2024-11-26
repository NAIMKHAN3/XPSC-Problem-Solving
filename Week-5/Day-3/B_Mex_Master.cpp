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
        vector<int> v(n);
        int mx = -1;
        int neg = 0;
        int pos = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
            if (v[i] == 0)
                neg++;
            else
                pos++;
        }
        if (neg == 0)
        {
            ans = 0;
        }else{
            if(pos >= neg-1){
                ans = 0;
            }else{
                if(mx == 1){
                    ans = 2;
                }else{
                    ans = 1;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}