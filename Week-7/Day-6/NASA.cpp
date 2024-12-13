#include <bits/stdc++.h>
using namespace std;
const int maxN = (1LL << 15);

vector<int> v;
bool isPalindrome(int x) {
   string s = to_string(x);
   int length = s.size();
   for (int i = 0;i < length / 2;i++) {
      if (s[i] != s[length - i - 1]) {
         return false;
      }
   }
   return true;
}

void markPalindrome() {
   for (int i = 0;i < maxN;i++) {
      if (isPalindrome(i)) {
         v.push_back(i);
      }
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   markPalindrome();

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      vector<int> a(n), cnt(maxN + 1);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
         cnt[a[i]]++;
      }

      long long ans = n;
      for (int i = 0;i < n;i++) {
         for (int j = 0;j < v.size();j++) {
            int curr = (a[i] ^ v[j]);
            ans += cnt[curr];
         }
      }

      cout << (ans / 2) << '\n';
   }
   return 0;
}