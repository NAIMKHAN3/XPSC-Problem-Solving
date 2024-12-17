#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int zero = 0;
        int one = 0;
        for(char c : str){
            if(c == '0'){
                zero++;
            }
            else{
                one++;
            }
        }
        for(char c : str){
            if(c == '1'){
                if(zero> 0) zero--;
                else break;
            }else{
                if(one> 0) one--;
                else break;
            }
        }
        cout << (zero + one) << endl;
    }
    return 0;
}