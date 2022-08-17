#include <iostream>

using namespace std;

int main()
{
    string in;
    int temp = 0, x = 0;

    cin >> in;

    temp += abs('a' - in[0]);
    (temp >= 13) ? x += abs(temp - 26) : x += temp;

    int i = 1;
    while (i < in.length())
    {
        temp = abs(in[i] - in[i - 1]);
        (temp >= 13) ? x += abs(temp - 26) : x += temp;
        i++;
    }

    cout << x;

    return 0;
}