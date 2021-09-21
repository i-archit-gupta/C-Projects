#include <stdio.h>

int main()
{
    int a;
    float b,c,d,e,f,g,h,i;
    printf("Choose the appropriate option\n");
    printf("1. Addition\n2. Subtraction\n 3. Multiplication\n4. Division\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Enter the first number\n");
        scanf("%f", &b);
        printf("Enter the second number\n");
        scanf("%f", &c);
        printf("The addition of the given two numbers is %f\n", b+c);
        break;
    case 2:
        printf("Enter the first number\n");
        scanf("%f", &d);
        printf("Enter the second number\n");
        scanf("%f", &e);
        printf("The subtraction of the given two numbers is %f\n", d-e);
        break;
    case 3:
        printf("Enter the first number\n");
        scanf("%f", &f);
        printf("Enter the second number\n");
        scanf("%f", &g);
        printf("The multiplication of given two numbers is %f\n",f*g);
        break;
    case 4:
        printf("Enter the first number\n");
        scanf("%f", &h);
        printf("Enter the second number\n");
        scanf("%f", &i);
        printf("The division of given two numbers is %f\n",h/i);
        break;
    default:
        printf("Invalid Option.Please Try Again\n");
        break;
    }
    return 0;
}
