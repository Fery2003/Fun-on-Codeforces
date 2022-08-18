#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    string in;
    cin >> in;

    vector<char> a;

    for (int i = 0; i < in.length(); i += 2)
    {
        a.push_back(in[i]);
    }

    sort(a.begin(), a.end());

    int i, j;
    for (i = 0, j = 0; i < a.size(); i++, j += 2)
    {
        in[j] = a.at(i);
    }

    cout << in;

    return 0;
}