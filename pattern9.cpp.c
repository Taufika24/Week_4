#include <stdio.h>
int main()
{
    int n, i, j, s1, s2;
    printf("Enter n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (s1 = 1; s1 <= i - 1; s1++)
        {
            printf(" ");
        }
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}