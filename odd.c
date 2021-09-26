#include <stdio.h>
// Write a program in C to display the n terms of odd natural number and their sum .
int main()
{
    int i,n,s=0;
    printf("Input the number of terms:");
    scanf("%d",&n);
    printf("The first %d odd numbers are:\n",n);
    for ( i = 1; i <=n; i+=1)
    {
        printf("%d ",2*i-1);
        s+=2*i-1;
    }
    printf("\nThe sum of first %d odd numbers is:%d\n",n,s);
    return 0;
}
