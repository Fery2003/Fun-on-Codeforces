#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        string t;
        cin >> n >> t;
        string ans;

        for (int i = n - 1; i >= 0; i--)
        {
            if (t[i] != '0')
            {
                char temp = t[i] - '0' + 'a' - 1;
                ans = temp + ans;
            }
            else
            {
                string temp;
                temp += t[i - 2];
                temp += t[i - 1];
                ans = (char)(stoi(temp) + 'a' - 1) + ans;
                i -= 2;
            }
        }
        cout << ans << '\n';
    }
}