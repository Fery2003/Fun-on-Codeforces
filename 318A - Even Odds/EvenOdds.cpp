#include <iostream>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n, k;

    cin >> n >> k;

    // if n is odd -> print even and vice versa

    // 2n + 1 - (offset)

    // (k >= ceil((float)n / 2)) ? cout << 2 * (k - ceil((float)n / 2)) : cout << 2 * k - 1; <---- dumb

    if (n % 2) // odd
    {
        if (k <= n / 2 + 1)
            cout << 2 * (k - 1) + 1; // odd output
        else
            cout << 2 * (k - (n / 2 + 1)); // even output
    }
    else // even
    {
        if (k <= n / 2)
            cout << 2 * (k - 1) + 1; // odd output
        else
            cout << 2 * (k - n / 2); // even output
    }

    return 0;
}