#include <stdio.h>
#include <string.h>

int main()
{
    int max;

    scanf("%d", &max);

    char tempStrings[max][200];

    for (int i = 0; i < max; i++)
        scanf("%s", tempStrings[i]);

    for (int i = 0; i < max; i++)
    {
        (strlen(tempStrings[i]) <= 10) ? printf("%s\n", tempStrings[i])
                                       : printf("%c%d%c\n", tempStrings[i][0], strlen(tempStrings[i]) - 2, tempStrings[i][strlen(tempStrings[i]) - 1]);
    }

    return 0;
}