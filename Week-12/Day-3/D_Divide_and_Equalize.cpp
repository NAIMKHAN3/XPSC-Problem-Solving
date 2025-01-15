#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      vector<int> v(n);
      for (int i = 0;i < n;i++) {
         cin >> v[i];
      }

      map<int, int> count;
      for (int i = 0;i < n;i++) {

         for (int j = 2;j * j <= v[i];j++) {
            if (v[i] % j == 0) {
               while (v[i] % j == 0) {
                  count[j]++;
                  v[i] /= j;
               }
            }
         }
         if (v[i] > 1) {
            count[v[i]]++;
         }
      }

      bool ans = true;

      for (auto [x, y] : count) {
         if (y % n != 0) {
            ans = false;
            break;
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