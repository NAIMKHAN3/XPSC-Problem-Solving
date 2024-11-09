#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;

        set<int> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'g') {
                st.insert(i);
            }
        }

        int mx = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                auto it = st.upper_bound(i);
                int count = 0;

                if (it != st.end()) {
                    count = *it - i;
                } else {
                    count = (n - i) + *st.begin();

                }

                mx = max(mx, count);
            }
        }

        if(c == 'g'){
            cout << 0 << endl;
        }else{
            cout << mx << endl;
        }
    }
    return 0;
}
