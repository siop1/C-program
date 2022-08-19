#include <stdio.h>
int main()
{
    printf("Protocol for finding middle number among various numbers\n");
    int a, b, c;
    printf("Enter three numbers\n ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a < c)
    {
        printf("%d is middle number\n ", a);
    }
    if (b > a && b < c)
    {
        printf("%d is middle number \n", b);
    }
    if (c > a && c < b)
    {
        printf("%d is middle number \n", c);
    }
    return 0;
}
