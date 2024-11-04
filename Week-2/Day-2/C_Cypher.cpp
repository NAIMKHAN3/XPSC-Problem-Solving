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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
           int n2;
           cin >> n2;
           for(int j = 0; j < n2; j++){
            char c;
            cin >> c;
            if(c == 'D'){
                if(v[i] == 9){
                    v[i] = 0;
                }else{
                    v[i]++;
                }
            }else if(c == 'U'){
                if(v[i] == 0){
                    v[i] = 9;
                } else{
                    v[i]--;
                }
            }
           }
        }
        for(int i =0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}