#include <stdio.h>
int main() 
{
    int n, i, j, k, l1, l2, s1, s2;
    printf("Enter n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++) 
            printf("*");
        for (s1 = 1; s1 <= 2 * n - 2 * i; s1++) 
            printf(" ");
        for (j = 1; j <= i; j++) 
            printf("*");
        printf("\n");
    }
    for (k = 1; k <= n; k++)
    {
        for (l1 = 1; l1 <= n - k + 1; l1++) 
            printf("*");
        for (s2 = 1; s2 <= 2 * k - 2; s2++) 
            printf(" ");
        for (l2 = 1; l2 <= n - k + 1; l2++) 
            printf("*");
        printf("\n");
    }
}