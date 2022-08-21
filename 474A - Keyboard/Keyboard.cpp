#include <iostream>

using namespace std;

int main()
{
    char a;
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string msg;
    int shift;

    cin >> a;
    cin >> msg;

    (a == 'R') ? shift = -1 : shift = 1;

    for (int i = 0; i < msg.length(); i++)
    {
        int pos = keyboard.find(msg[i]);

        if ((pos == 0 && shift == -1) || (pos == keyboard.length() - 1 && shift == 1))
            continue;
        else
            cout << keyboard[pos + shift];
    }

    return 0;
}