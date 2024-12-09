#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   vector<int> v(n);
   for (int i = 0;i < n;i++) {
      cin >> v[i];
   }
   bool ans = false;
   for (int i = 0;i < (1 << n);i++) {
      int sum = 0;
      for (int k = 0;k < n;k++) {
         if ((i >> k) & 1) {
            sum += v[k];
         }
         else {
            sum -= v[k];
         }
      }

      if (sum % 360 == 0) {
         ans = true;
         break;
      }
   }

   if (ans) {
      cout << "YES" << '\n';
   }
   else {
      cout << "NO" << '\n';
   }

   return 0;
}