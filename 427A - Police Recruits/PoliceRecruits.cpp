#include <iostream>

using namespace std;

int main()
{
    int n, count = 0, unhandled = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (const auto &num : a)
    {
        (num >= 1) ? count += num : (count) ? count-- : unhandled++;
    }

    cout << unhandled;

    return 0;
}