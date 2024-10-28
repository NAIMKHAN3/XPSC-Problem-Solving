#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        auto it = find(v.begin(), v.end(), s);
        if (it == v.end())
        {
            v.push_back(s);
        }
    }
    cout << v.size() << endl;

    return 0;
}