#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;

    int ans = 0;

    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            for (int k = 0; k <= x; k++)
            {
                if (i + j + k <= x && i * j * k <= y)
                {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}