#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for (auto [key, value] : mp)
        {
            pq.push(value);
        }
        while (!pq.empty())
        {
            if(pq.size() < 2){
                break;
            }
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x--;
            y--;
            if(x > 0){
                pq.push(x);
            }
            if(y > 0){
                pq.push(y);
            }
        }
        if(pq.size()) cout<< pq.top()<< endl;
        else cout<< 0<< endl;
    }
    return 0;
}