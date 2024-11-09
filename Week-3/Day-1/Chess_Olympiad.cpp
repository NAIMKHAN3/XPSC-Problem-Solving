#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    int totalRound = x + y + z;
    float a = x * 1 + y * 0.5;
    float b = z * 1 + y * 0.5;
   if(totalRound < 4){
    a += (4 - totalRound) * 1;
   }
   if(a> b){
    cout << "Yes";
   }else{
    cout << "No";
   }
    return 0;
}