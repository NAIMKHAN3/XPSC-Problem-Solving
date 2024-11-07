#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
         multiset<int, greater<int> > st;
         long long ans = 0;
         for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 0){
                if(st.size()>0){
                    ans += *st.begin();
                    st.erase(st.begin());
                }
            }else{
                st.insert(x);
            }
         }
         cout << ans << endl;
    }
    return 0;
}