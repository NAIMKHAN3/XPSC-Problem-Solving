#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, q;
   cin >> n >> q;
   vector<int> v(n);
   for (int i = 0;i < n;i++) {
      cin >> v[i];
   }

   for (int i = 0;i < q;i++) {
      int k, l = 0, r = n - 1, mid;
      cin >> k;
      bool ans = false;
      while (l <= r) {
         mid = (l + r) / 2;
         if (k == v[mid]) {
            ans = true;
            break;
         }
         else if (k < v[mid]) {
            r = mid - 1;
         }
         else {
            l = mid + 1;
         }
      }
      if (ans) {
         cout << "YES" << '\n';
      }
      else {
         cout << "NO" << '\n';
      }
   }
   return 0;
}