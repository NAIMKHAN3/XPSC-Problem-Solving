#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
    cin >> n;
    string str;
    cin >> str;

    set<char> st;
    for (int i = 0; i < n; i++) {
        st.insert(str[i]);
    }

    vector<long long> v(26, LONG_MAX);

    for (auto ch : st) {
        int l = 0, h = n - 1;
        long long count = 0;

        while (l < h) {
            if (str[l] == str[h]) {
                l++;
                h--;
            } else {
                if (str[l] == ch) {
                    l++;
                    count++;
                } else if (str[h] == ch) {
                    h--;
                    count++;
                } else {
                    count = -1;
                    break;
                }
            }
        }

        if (count != -1) {
            v[ch - 'a'] = count;
        }
    }

    sort(v.begin(), v.end());

    if (v[0] == LONG_MAX) {
        cout << "-1" << endl;
    } else {
        cout << v[0] << endl;
    }
    }

    return 0;
}
