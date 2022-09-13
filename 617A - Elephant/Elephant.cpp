#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, min = 0;
    cin >> x;

    do
    {
        x -= 5;
        min++;
    } while (x > 0);

    cout << min;

    return 0;
}