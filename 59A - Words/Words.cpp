#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, ans;
    cin >> s;

    int up = 0, low = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            up++;
        else
            low++;
    }

    if (up > low)
    {
        for (int i = 0; i < s.length(); i++)
            ans += toupper(s[i]);
    }
    else if (up < low || up == low)
    {
        for (int i = 0; i < s.length(); i++)
            ans += tolower(s[i]);
    }

    cout << ans;

    return 0;
}