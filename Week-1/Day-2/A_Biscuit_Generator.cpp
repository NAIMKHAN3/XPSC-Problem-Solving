#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int sum =0;
    int n = 1;
    int count= x;
    while (true)
    {
        if(x * n >z){
            break;
        }
        sum += y;
        count = x * n;
        n++;
    }
    cout << sum << endl;

    return 0;
}