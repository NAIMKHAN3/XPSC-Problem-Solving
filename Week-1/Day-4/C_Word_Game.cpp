#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, vector<int>> m;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                m[s].push_back(i);
            }
        }
        vector<int> ans(4);
        for (auto [s,v] : m){
            if(v.size() == 1){
                ans[v[0]] +=3;
            }else if(v.size() == 2){
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }
        for(int i = 1; i <= 3; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}