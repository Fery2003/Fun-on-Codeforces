#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w, cost = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        cost += i * k;
    }

    (cost > n) ? cout << abs(n - cost) : cout << 0;

    return 0;
}