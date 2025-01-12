#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("Sum of %d is %d",n,sum);
    return 0;
}