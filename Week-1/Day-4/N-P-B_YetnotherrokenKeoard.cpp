#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        string result;
        int u =0;
        int l = 0;
        for(char c : str) {
            if (c >= 'a' && c <= 'z' && c != 'b') {
                l++;
            } else if (c >= 'A' && c <= 'Z' && c != 'B') {
                u++;
            }
        }
        
        for (char c : str) {
            if (c == 'b') {
                if(l){
                    for (int i = result.length() - 1; i >= 0; i--) {
                    if (result[i] >= 'a' && result[i] <= 'z') {
                        result.erase(i, 1);
                        l--;
                        break;
                    }
                }
                }
            } else if (c == 'B') {
                if(u){
                    for (int i = result.length() - 1; i >= 0; i--) {
                    if (result[i] >= 'A' && result[i] <= 'Z') {
                        result.erase(i, 1);
                        u--;
                        break;
                    }
                }
                }
            } else {
                result += c;
            }
        }
        cout << result << endl;
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         map<long long, char> ma;
//         long long n, index;
//         string s;
//         cin >> s;
//         n = (long long)s.size();
//         stack<long long> uppercase, lowercase;

//         for (long i = 0; i < n; i++)
//         {
//             if (s[i] == 'B')
//             {
//                 if (!uppercase.empty())
//                 {
//                     index = uppercase.top();
//                     ma[index] = '$';
//                     uppercase.pop();
//                 }
//                 continue;
//             }
//             if (s[i] == 'b')
//             {
//                 if (!lowercase.empty())
//                 {
//                     index = lowercase.top();
//                     ma[index] = '$';
//                     lowercase.pop();
//                 }
//                 continue;
//             }

//             ma[i] = s[i];
//             if (isupper(s[i]))
//             {
//                 uppercase.push(i);
//             }
//             else
//             {
//                 lowercase.push(i);
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (ma.count(i) && ma[i] != '$')
//             {
//                 cout << ma[i];
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
