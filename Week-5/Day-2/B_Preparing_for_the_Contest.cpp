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
        int n,k;
        cin >> n >> k;
        vector<int>v;
        for(int i = n-k; i<=n; i++){
            v.push_back(i);
        }
        for(int i = n-k-1; i>0; i--){
            v.push_back(i);
        }
        for(int i = 0; i<n; i++){
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}