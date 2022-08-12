#include <stdio.h>
#include <string.h>

int main()
{
    int max = 0;
    int canSolve = 0;
    scanf("%d", &max);

    char prob[100];

    for (int i = 0; i <= max; i++)
    {
        int num = 0;

        fgets(prob, 100, stdin);

        for (int j = 0; j < strlen(prob); j++)
            (prob[j] == '1') ? num++ : num;

        (num >= 2) ? canSolve++ : canSolve;
    }

    printf("%d", canSolve);

    return 0;
}