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
        string name;
        cin >> name;
        bool T = false;
        bool i = false;
        bool m = false;
        bool u = false;
        bool r = false;
        if (n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (name[j] == 'T')
                    T = true;

                else if (name[j] == 'i')
                    i = true;

                else if (name[j] == 'm')
                    m = true;

                else if (name[j] == 'u')
                    u = true;

                else if (name[j] == 'r')
                    r = true;
            }
            if (T && i && m && u && r)
                cout << "YES" << endl;
            else
                cout<< "NO" << endl;
        }
    }
    return 0;
}