#include <stdio.h>
#include <string.h>

int main()
{

    int n, k, count = 0;

    scanf("%d%d", &n, &k);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0;
    while (a[i] >= a[k - 1] && a[i] != 0 && i < n)
    {
        i++, count++;
    }

    printf("%d", count);

    return 0;
}