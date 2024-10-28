#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<char> d;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            d.push_back(c);
        }
        int i = 0;
        int j = n-1;
        if(d.size()> 1){
            while(true){
            if(i>=j){
                break;
            }
            char first = d.front();
            char last = d.back();

            if(first == 'B' && last == 'B'){
                break;
            }
            else if(first == 'W' && last == 'W'){
                d.pop_front();
                d.pop_back();
                i++;
                j--;
            }
            else if(first == 'W'){
                d.pop_front();
                i++;
            }else if (last == 'W'){
                d.pop_back();
                j--;
            }
            
        }
        cout << d.size() << endl;
        }else{

        if(d.front()== 'W'){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }
        }
    }
    return 0;
}