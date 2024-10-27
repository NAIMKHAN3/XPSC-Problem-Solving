#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long odd = LLONG_MAX;
    vector<long long int> v(n);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v[i] = x;
        sum +=v[i];
    // cout <<sum;
        if(v[i] % 2 != 0){
            odd = min(odd, v[i]);
        }
    }
    if(sum % 2 != 0){
        sum -= odd;
    }
    cout << sum << endl;
    return 0;
}