#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, g;
        cin >> a >> b >> g;

        int d = 1;
        set<int> s;
        while (g % d == 0)
        {
            int cur = g / d;
            s.insert(cur);
            while (cur % a == 0)
            {
                s.insert(cur / a);
                cur /= a;
            }
            d *= b;
        }
        cout << s.size() << endl;
    }
    return 0;
}