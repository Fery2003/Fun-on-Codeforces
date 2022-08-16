#include <iostream>

using namespace std;

int main()
{
    int n, groups = 0;

    cin >> n;

    string a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 1;
    while (i < n)
    {
        (a[i] != a[i - 1]) ? groups++ : groups;
        i++;
    }

    return 0;
}