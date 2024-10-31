#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("the febonacci series  of %d is %d\n", i, c);
    }
    return 0;
}