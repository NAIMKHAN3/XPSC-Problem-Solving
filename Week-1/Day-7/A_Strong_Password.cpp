#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string name, ans;
        cin >> name;
        bool found = false;
        for (int i = 0; i < name.size() - 1; i++)
        {
            if (name[i] == name[i + 1])
            {
                ans = name.substr(0, i+1);
                if (name[i] != 'x' && name[i + 1] != 'x')
                {
                    ans += "x";
                }
                else if (name[i] != 'y' && name[i + 1] != 'y')
                {
                    ans += "y";
                }
                else if (name[i] != 'z' && name[i + 1] != 'z')
                {
                    ans += "z";
                }
                ans = ans + name.substr(i+1, name.length() - i);
                found = true;
            }
        }
        if(found){
            cout << ans << endl;
        }else{
            ans = name;
            if (name[name.length() -1] != 'x' )
                {
                    ans += "x";
                }
                else if (name[name.length() -1] != 'y')
                {
                    ans += "y";
                }
                else if (name[name.length() -1] != 'z')
                {
                    ans += "z";
                }
                cout << ans << endl;
        }
    }
    return 0;
}