#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long t;
    cin >> t;
    while (t--)
    {
        long x, y, z;
        cin >> x >> y >> z;
        if ((x + y + z) % 2)
        {
            cout << "-1" << endl;
            continue;
        }
        long a = (x + y + z) / 2;
        long b = x + y;
        cout << (a < b ? a : b) << endl;
    }
    return 0;
}