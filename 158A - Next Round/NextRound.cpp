#include <iostream>

using namespace std;

int main()
{

    // is greater than 0 and scores >= a(i + 1)

    string in;
    int n, k, count = 0;
    getline(cin, in);

    int pos;

    pos = in.find(' ');
    n = stoi(in.substr(0, pos));
    k = stoi(in.substr(pos, in.length() - 1));

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0;
    while (a[i] >= a[k - 1] && a[i] != 0 && i < n)
        count++, i++;

    cout << count;

    return 0;
}