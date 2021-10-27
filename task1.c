//Write a program input two numbers and display all arithmetic operations.
#include <stdio.h>
int main()
{
    float f,s,add,sub,mul,div;
    printf("Enter first number:\n");
    scanf("%f",&f);
    printf("Enter the second number:\n");
    scanf("%f",&s);
    add=f+s;
    sub=f-s;
    mul=f*s;
    div=f/s;
    printf("The addition is %f\n",add);
    printf("The difference is %f\n",sub);
    printf("The multiplication is %f\n",mul);
    printf("The division is %f\n",div);

    return 0;
}
