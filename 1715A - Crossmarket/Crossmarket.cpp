#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, m, moves = 0;
        cin >> n >> m;
        if (n == 1 && m == 1)
        {
            cout << 0 << endl;
            continue;
        }

        moves += max(n, m);
        moves += min(n, m) / 2 * 4;

        (min(n, m) % 2 == 0) ? moves -= 2 : moves;

        cout << moves << endl;
    }

    return 0;
}