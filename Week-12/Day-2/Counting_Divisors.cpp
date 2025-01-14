#include <bits/stdc++.h>
using namespace std;

const int n = 1e6 + 9;;
vector<int> v(n);

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   for (int i = 1;i < n;i++) {
      for (int j = i;j < n;j += i) {
         v[j]++;
      }
   }

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      cout << v[n] << endl;
   }

   return 0;
}