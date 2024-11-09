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
        string str;
        cin >> n >> str;
        int i = 0;
        int j = n - 1;
        int count = 0;
        while (i < j)
        {
            if (str[i] == str[j])
            {
                break;
            }else{
                count++;
                i++;
                j--;
            }
        }
        count = count * 2;
        cout << n - count << endl;
    }
    return 0;
}