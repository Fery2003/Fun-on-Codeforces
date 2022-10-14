#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, count = 0;
        cin >> x;

        for (int i = 0; i < 3; i++)
        {
            cin >> y;
            (y > x) ? count++ : count;
        }

        cout << count << endl;
    }

    return 0;
}