#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
int b = 30;
   int t;
   cin >> t;
   while (t--) {
      int n, m;
      cin >> n >> m;
      vector<int> v(n);

      for (int i = 0;i < n;i++) {
         cin >> v[i];
      }

      vector<int> bit(b + 1);
      for (int i = 0;i < n;i++) {
         for (int k = b;k >= 0;k--) {
            if ((v[i] >> k) & 1) {
               bit[k]++;
            }
         }
      }

      int ans = 0;
      for (int k = b;k >= 0;k--) {
         if (bit[k] == n) {
            ans += (1 << k);
         }
         else {
            int need = n - bit[k];
            if (m >= need) {
               ans += (1 << k);
               m -= need;
            }
         }
      }

      cout << ans << '\n';
   }

   return 0;
}