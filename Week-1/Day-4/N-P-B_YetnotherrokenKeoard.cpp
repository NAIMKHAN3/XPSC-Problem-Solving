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
