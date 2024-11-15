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
        string str;
        cin >> str;

        int ans = 0;
        int i = 0;
        
        while (i < n)
        {
            if (str[i] == 'B')
            {
                ans++;
                i += k;
            }
            else
            {
                i++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
