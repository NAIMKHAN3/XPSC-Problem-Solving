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
        long long s = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(i == n-2){
                s+= -x;
            }else{
                s += x;
            }
        }

        cout << s << endl;
    }
}