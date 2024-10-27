#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    int count = y-x;
    if(count <0){
        cout << 0 << endl;
    }else{
        cout << count +1 << endl;
    }
    return 0;
}