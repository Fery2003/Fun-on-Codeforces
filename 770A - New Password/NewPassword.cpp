#include <iostream>

using namespace std;

int main()
{
    int n, k;
    string pass;
    char c = 'a';

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        if (i % k == 0)
            c = 'a';
        cout << c;
        c++;
    }

    return 0;
}