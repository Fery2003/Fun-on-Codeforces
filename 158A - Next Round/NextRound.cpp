#include <iostream>

using namespace std;

int main()
{

    // is greater than 0 and scores >= a(i + 1)

    int n, k, count = 0;

    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0;
    while (a[i] >= a[k - 1] && a[i] != 0 && i < n)
        count++, i++;

    cout << count;

    return 0;
}