#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans;
    int n = 4 - s.length();
    for (int i = 0; i < n; i++)
    {
        ans += "0";
    }
    cout << ans+s;
    return 0;
}