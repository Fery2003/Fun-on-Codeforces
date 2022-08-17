#include <iostream>

using namespace std;

int main()
{
    int max;

    cin >> max;

    string tempStrings[max];

    for (int i = 0; i < max; i++)
        cin >> tempStrings[i];

    for (string str : tempStrings)
        (str.length() <= 10) ? cout << str << endl
                             : cout << str.front() << str.length() - 2 << str.back() << endl;

    return 0;
}