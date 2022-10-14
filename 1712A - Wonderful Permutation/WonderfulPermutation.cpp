#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x, count = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;

            if (i < k && x > k)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}