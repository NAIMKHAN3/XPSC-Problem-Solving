#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, m;
    cin >> n >> m;
    vector<long long int> a(n);
    vector<long long int> b(m);
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (long long int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long long int i = 0;
    long long int j = 0;
    vector<long long int> ans;
    while (i != n && j != m)
    {
        if (a[i] < b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else if (b[j] < a[i])
        {
            ans.push_back(b[j]);
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            ans.push_back(b[j]);
            i++;
            j++;
        }
    }
    if(i != n){
        while(i!=n){
            ans.push_back(a[i]);
            i++;
        }
    }else if(j != m){
        while(j!=m){
            ans.push_back(b[j]);
            j++;
        }
    }
    for (long long int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}