#include <stdio.h>
int main()
{
    int n, i, j, s;
    printf("Enter n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) 
    {
        for (s = 1; s <= i - 1; s++)
        {
            printf(" ");
        }
        for (j = 1; j <= n - i + 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++) 
    {
        for (s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}