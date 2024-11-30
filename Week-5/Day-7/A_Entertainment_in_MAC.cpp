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
        string str;
        cin >> str;
        string rev = str;
        reverse(rev.begin(), rev.end());
        if (str <= rev)
        {
            if (n % 2 == 0)
            {
                cout << str << endl;
            }
            else
            {
                cout << rev << endl;
            }
        }
        else
        {
            if (n % 2 == 1)
            {
                cout << rev << endl;
            }
            else
            {
                cout<< rev << str << endl;
            }
        }
    }
    return 0;
}