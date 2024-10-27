#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    int sum = 0;
    if(x>= y){
        sum+= x;
        x--;
    }else{
        sum+= y;
        y--;
    }
    sum+= max(x,y);
    cout << sum;

    return 0;
}