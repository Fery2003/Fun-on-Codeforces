#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 0;
    string in;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> in;
        (in[1] == '+') ? x++ : x--;
    }

    cout << x;

    return 0;
}