#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int max;
    int canSolve = 0;
    cin >> max;

    for (int i = 0; i <= max; i++)
    {
        string prob;
        int num = 0;

        getline(cin, prob);

        num += count(prob.begin(), prob.end(), '1');

        canSolve += (num >= 2) ? 1 : 0;
    }

    cout << canSolve;

    return 0;
}