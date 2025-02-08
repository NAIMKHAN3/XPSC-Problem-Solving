#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<bool> ok(n, false);
        long chg = 0;

        for (long i = 0; i < s.size(); i++)
        {
            if (ok[i])
            {
                continue;
            }
            vector<long> p;
            set<long> group;
            map<char, long> t;
            p.push_back(i);
            while (p.size())
            {
                long pos = p.back();
                p.pop_back();
                if (ok[pos])
                {
                    continue;
                }
                group.insert(pos);
                t[s[pos]]++;
                ok[pos] = true;
                for (long u = pos % k; u < n; u += k)
                {
                    if (!ok[u])
                    {
                        p.push_back(u);
                    }
                    if (!ok[n - 1 - u])
                    {
                        p.push_back(n - 1 - u);
                    }
                }
            }

            long mx = 0;
            for (set<long>::iterator it = group.begin(); it != group.end(); it++)
            {
                ok[*it] = true;
            }
            for (map<char, long>::iterator it = t.begin(); it != t.end(); it++)
            {
                mx = (mx > (it->second)) ? mx : (it->second);
            }
            chg += (group.size() - mx);
        }
        cout << chg << endl;
    }
    return 0;
}