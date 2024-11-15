#include <bits/stdc++.h>
using namespace std;

void solved()
{
    string a, b;
    cin >> a >> b;
    int x = a.size();
    int y = b.size();

      if (a == "M" && b == "M")
    {
        cout << "=" << endl;
        return;
    }

    if (a == "M")
    {
        if (b.back() == 'L')
        {
            cout << "<" << endl;
        }
        else
        {
            cout << ">" << endl;
        }
        return;
    }

    if (b == "M")
    {
        if ( a[a.size() - 1] == 'L')
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "<" << endl;
        }
        return;
    }

    if ( a[a.size() - 1] == 'S' && b.back() == 'S')
    {
        if (a.size() < b.size())
        {
            cout << ">" << endl;
        }
        else if (a.size() > b.size())
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    else if ( a[a.size() - 1] == 'L' && b.back() == 'L')
    {
        if (a.size() < b.size())
        {
            cout << "<" << endl;
        }
        else if (a.size() > b.size())
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    else
    {
        if ( a[a.size() - 1] == 'L')
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "<" << endl;
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
        solved();
    }
    return 0;
}