#include<bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    string ans = "";
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; ++i)
    {
        if(str[i] == 'A' || str[i] == 'O' || str[i] == 'Y' || \
                str[i] == 'E' || str[i] == 'U' || str[i] == 'I' || \
                str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || \
                str[i] == 'e' || str[i] == 'u' || str[i] == 'i') continue;
        ans += '.';
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            ans += str[i] - 'A' + 'a';
        }
        else
        {
            ans += str[i];
        }
    }
    cout << ans << endl;
    return 0;
}

