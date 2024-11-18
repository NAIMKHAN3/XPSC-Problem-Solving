#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;
        long long maxNValue = min(s / n, a) * n;
        long long ans = s - maxNValue;

        if (ans <= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
