#include <iostream>

using namespace std;

int main()
{
    string in;
    int n, h, minWidth = 0;
    getline(cin, in);

    int pos;

    pos = in.find(' ');
    n = stoi(in.substr(0, pos));
    h = stoi(in.substr(pos, in.length() - 1));

    int heights[n];

    for (int i = 0; i < n; i++)
        cin >> heights[i];

    for (const auto &height : heights)
        (height > h) ? minWidth += 2 : minWidth++;

    cout << minWidth;

        return 0;
}