#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter n");
    scanf("%d", &n);
    k = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", k++);
        }
        printf("\n");
    }
}