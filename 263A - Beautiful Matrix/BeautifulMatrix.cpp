#include <iostream>

using namespace std;

int main()
{
    int n, moves;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> n;
            if (n == 1) {
                int row = abs(2 - i);
                int column = abs(2 - j);
                moves = row + column;
            }
        }
    }

    cout << moves;

    return 0;
}