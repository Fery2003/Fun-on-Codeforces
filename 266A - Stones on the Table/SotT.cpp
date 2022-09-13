#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 0;
    string s;

    cin >> n >> s;

    for (int i = 1; i <= n; i++)
        (s[i] == s[i - 1]) ? x++ : x;

    cout << x;

    return 0;
}