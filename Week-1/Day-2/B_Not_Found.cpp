#include <bits/stdc++.h>
using namespace std;

int main()
{
    int letter_count[26];
    memset(letter_count, 0, sizeof(letter_count));
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        letter_count[s[i] - 'a']++;
    }
    char c = NULL;
    for (int i = 0; i < 26; i++)
    {
        if (letter_count[i] == 0)
        {
            c = i + 'a';
            break;
        }
    }
    if (c)
        cout << c << endl;
    else
        cout << "None" << endl;

    return 0;
}