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

        if (n % 2 == 1)
        {

            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            string ans;
            int count = 0;
            char c = 'A';
            while (count < n)
            {
                ans += c == 'A'? "AA": "BB";
                count += 2;
                c = c == 'A' ? 'B' : 'A';
            }

            cout << ans << endl;
        }
    }
    return 0;
}