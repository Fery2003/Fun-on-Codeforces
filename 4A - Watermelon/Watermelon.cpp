#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    (input % 2 == 0 && input > 2) ? cout << "YES" : cout << "NO";

    return 0;
}