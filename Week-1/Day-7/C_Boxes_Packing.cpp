#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    int ans = 0;
    for (auto [key,value] : mp) {
        ans = max(ans, value);
    }

    cout << ans << endl;

    return 0;
}
