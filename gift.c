#include <stdio.h>

int main()
{
    int g;
    printf("Please choose the appropriate option of subject you passed\n");    
    printf("1. Maths\n");    
    printf("2. Science\n");    
    printf("3. Maths and Science\n");
    scanf("%d",&g);

    if (g==1)
    {
        printf("You are passed in maths and will be awarded with a gift of Rs. 15/-\n");
    }
    else if (g==2)
    {
        printf("You are passed in science and will be awarded with a gift of Rs. 15/-\n");
    }
    else if (g==3)
    {
        printf("You are passed in maths and science and will be awarded with a gift of Rs. 45/-\n");
    }
    else
    {
        printf("Invalid Option. Please try again.\n");
    }
    
    
    return 0;
}
