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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        string str;
        cin >> str;

        map<int, int> liked;
        map<int, int> disliked;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                disliked[v[i]] = i;
            }
            else
            {
                liked[v[i]] = i;
            }
        }


        vector<int> ans(n);
        int rating = 1;

        for (auto [val, idx] : disliked)
        {
            ans[idx] = rating;
            rating++;
        }

        for (auto [val, idx] : liked)
        {
            ans[idx] = rating++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
