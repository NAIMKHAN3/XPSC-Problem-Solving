#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int s=0, d=0;
    cin >> n;
    deque<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int i = 1;
    while (!v.empty())
    {
        if (i % 2 == 1)
        {
            int l = v.front();
            int r = v.back();
           if(l>r){
            s += l;
            v.pop_front();
           }else{
            s += r;
            v.pop_back();
 
           }
        }
        else
        {
          int l = v.front();
            int r = v.back();
           if(l>r){
            d += l;
            v.pop_front();
           }else{
            d += r;
            v.pop_back();
 
           }
        }
        i++;
    }
    cout  << s << " " << d << endl;
    return 0;
}