#include <stdio.h>

int main()
{
    int i,s=0,n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("The first %d natural numbers are:\n",n);
    for (i = 1; i <=n; i+=1)
    {
        printf("%d\n",i);
        s+=i;
    }
    printf("The sum of first %d natural numbers is:%d\n",n,s);
    return 0;
}
