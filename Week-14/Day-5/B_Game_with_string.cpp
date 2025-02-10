#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    long ans = 0;
    stack<long long> t;
    for (long long  i = 0; i < s.size(); i++)
    {
        if (t.size() && t.top() == s[i])
        {
            t.pop();
            ans++;
        }
        else
        {
            t.push(s[i]);
        }
    }

    cout << (ans % 2 ? "Yes" : "No") << endl;
    return 0;
}