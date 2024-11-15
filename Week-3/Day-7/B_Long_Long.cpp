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

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long sum = 0;
        int op = 0;
        bool isNegative = false;

        for (int i = 0; i < n; i++) {
            if(a[i]< 0){
                sum += a[i] * -1;
            }else{
                sum += a[i];
            }

            if (a[i] < 0 && !isNegative) {
                op++;
                isNegative = true;
            } else if (a[i] > 0) {
                isNegative = false;
            }
        }
        cout << sum << " " << op << "\n";
    }

    return 0;
}
