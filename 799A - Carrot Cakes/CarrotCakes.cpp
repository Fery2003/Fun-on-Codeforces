#include <iostream>

using namespace std;

int main()
{
    int n, t, k, d, time1 = 0, time2 = 0;
    cin >> n >> t >> k >> d;

    if (k >= n)
        cout << "NO";
    else
    {
        while (n > 0)
        {
            time1 += t;
            time2 = t + d;
            n -= k;
        }
        (time1 <= time2) ? cout << "NO" : cout << "YES";
    }

    return 0;
}