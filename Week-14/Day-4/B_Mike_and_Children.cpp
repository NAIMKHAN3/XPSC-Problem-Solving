#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> v;
    map<long long , long long> m;

    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        for (long long j = 0; j < v.size(); j++)
        {
            m[x + v[j]]++;
            if(ans > m[x + v[j]]){
                ans = ans;
            }else{
                ans = m[x + v[j]];
            }
        }
        v.push_back(x);
    }
    cout << ans << endl;

    return 0;
}