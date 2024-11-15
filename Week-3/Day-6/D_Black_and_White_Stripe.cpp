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
        int ans = INT_MAX;
        int i = 0;
        int j = 0;
        queue<char> q;

        while (j < n)
        {
            if (str[j] == 'W')
            {
                q.push(str[j]);
            }
            if (j - i + 1 == k)
            {
               
                int size = q.size();
                ans = min(ans, size);
                if (str[i] == 'W')
                {
                    q.pop();
                }
                i++;
            }
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}