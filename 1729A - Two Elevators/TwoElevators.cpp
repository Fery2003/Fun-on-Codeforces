#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, t1, t2;

    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        t1 = abs(a - 1);
        t2 = abs(b - c) + abs(c - 1);

        (t1 < t2) ? cout << "1\n" : (t1 > t2) ? cout << "2\n" : cout << "3\n";
    }

    return 0;
}