// Write a program in C to display the multiplication table of a given integer
#include <stdio.h>

int main()
{
    int i,n;
    printf("Input the number for the table:\n");
    scanf("%d", &n);
    printf("The table is as follows:\n");
    for(i=1;i<=10;i+=1)
    {
        printf("%d\n",n*i);
    }
    return 0;
}
