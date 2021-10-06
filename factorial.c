#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main()
{
    int n;
    printf("Enter the number you want factorial of:\n");
    scanf("%d",&n);
    printf("The factorial of %d is %d\n", n, factorial(n));
    return 0;
}
