#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      long long n;
      cin >> n;
      deque<long long> ans;
      for (int k = 0;k <= __lg(n);k++) {
         if ((n >> k) & 1) {
            long long v = n - (1LL << k);
            if (v > 0) {
               ans.push_front(v);
            }
         }
      }

      ans.push_back(n);
      cout << ans.size() << '\n';
      for (auto v : ans) {
         cout << v << " ";
      }
      cout << endl;
   }

   return 0;
}