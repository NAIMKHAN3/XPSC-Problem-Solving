#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string s;
    cin >> s;
    int n = s.length();
    if (s == "()")
    {
        cout << "NO" << endl;
        return;
    }

    int i = 0;
    bool flag = false;
    while (i < n - 1)
    {
        if (s.substr(i, 2) == ")(")
        {
            flag = true;
            break;
        }
        i++;
    }
    string ans = "";
    if (flag)
    {

        for (int i = 0; i < n; i++)
        {
            ans += "(";
        }
        for (int i = 0; i < n; i++)
        {
            ans += ")";
        }
        cout << "YES" << endl;
        cout << ans << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ans += "()";
        }
        if (ans == s)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}