#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string in1, in2;

    cin >> in1 >> in2;

    int x = 0, size = in1.size();

    for (int i = 0; i < size; i++)
    {
        if (tolower(in1[i]) > tolower(in2[i]))
        {
            x = 1;
            break;
        }
        else if (tolower(in1[i]) < tolower(in2[i]))
        {
            x = -1;
            break;
        }
    }

    cout << x;

    return 0;
}