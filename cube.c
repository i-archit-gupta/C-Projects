#include <stdio.h>

int main()
{
    // Write a program in C to display the cube of the number upto given an integer.
    int i,n;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    for (i =1; i <=n; i+=1)
    {
        printf("Cube of %d is %d\n",i,i*i*i);
    }
    
    return 0;
}
