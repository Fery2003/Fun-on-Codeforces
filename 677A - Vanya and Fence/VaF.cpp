#include <iostream>

using namespace std;

int main()
{
    int n, h, minWidth = 0;
    cin >> n >> h;

    int heights[n];

    for (int i = 0; i < n; i++)
        cin >> heights[i];

    for (const auto &height : heights)
        (height > h) ? minWidth += 2 : minWidth++;

    cout << minWidth;

        return 0;
}