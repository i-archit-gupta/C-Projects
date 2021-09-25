#include <stdio.h>

int main()
{
    // Write a program in C to read 10 numbers from keyboard and find their sum and average.
    int i,n,s=0;
    float avg;
    printf("Input 10 Numbers:\n");
    for (i = 1; i <=10; i+=1)
    {
        printf("Number %d:",i);
        scanf("%d",&n);
        s+=n;
    }
    avg=s/10.0;
    printf("The sum of 10 numbers is:%d and the average is:%f\n",s,avg);
    return 0;
}
