#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[b] = a;
    }
   
    for(int i = 0; i < m; i++){
        string a, b;
        cin >> a >> b;
        string temp =b;
    temp.pop_back();
        cout<< a<<" " << b << " " << "#" << mp[temp] << endl;
    }
    return 0;
}