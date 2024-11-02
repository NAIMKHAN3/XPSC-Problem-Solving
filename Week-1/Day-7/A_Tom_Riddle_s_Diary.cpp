#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, bool> mp;

    while(n--){
        string name;
        cin >> name;
        auto it = mp.find(name);
        if(it == mp.end()){
            mp[name] = true;
            cout << "NO" <<endl;
        }else{
            cout <<"YES" << endl;
        }
    }
    return 0;
}