#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int i = 0;

    do
    {
        a *= 3;
        b *= 2;
        i++;
    } while (a <= b);

    cout << i;

    return 0;
}