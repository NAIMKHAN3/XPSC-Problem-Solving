#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0;
    int j = 0;
    int count = 0;
    vector<int> ans;
    while (true)
    {
        if (j == m)
        {
            break;
        }
        if (i != n && a[i] < b[j]){
            count++;
            i++;
        }else{
            ans.push_back(count);
            j++;
        }
    }
    for(int v: ans){
        cout << v << " ";
    }
    return 0;
}