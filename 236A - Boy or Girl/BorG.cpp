#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<char> a;

    string in;

    cin >> in;

    for (const auto &letter : in)
        a.insert(letter);

    (a.size() % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";

    return 0;
}