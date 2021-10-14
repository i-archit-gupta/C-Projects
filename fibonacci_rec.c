#include <stdio.h>
int fib_rec(int num)
{
    if (num == 1 || num == 2)
    {
        return num - 1;
    }
    else
    {
        return fib_rec(num-1)+fib_rec(num-2);
    }
}
int main()
{
    int n;
    printf("Enter the index of the number in the fibonacci series:\n");
    scanf("%d", &n);
    printf("The position of element number %d in the fibonacci series is %d\n",n,fib_rec(n));
    return 0;
}
