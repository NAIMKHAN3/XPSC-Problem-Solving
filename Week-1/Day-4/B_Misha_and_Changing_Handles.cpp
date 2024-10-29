#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string,string>> v;
    for(int i=0; i<n; i++)
    {
         string a, b;
            cin >> a >> b;
        if(v.empty()){
           
            v.push_back({a,b});
        }else{
            bool flag = false;
            for(int i = 0; i < v.size(); i++){
                string first = v[i].first;
                string second = v[i].second;
                if(a == second){
                // cout << a << " " << second<<endl;
                    v[i].second = b;
                    flag = true;
                    break;
                }
            }
            if(!flag){
                v.push_back({a,b});
            }
        }
    }
    cout << v.size() << endl;
    for(auto x:v){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}