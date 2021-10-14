#include <stdio.h>
int main()
{
    int matrix[3][3];
    int i,j;
    printf("This program will print a 3X3 matrix:\n\n");
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            printf("Enter the numbers row wise:");
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n\n\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSo this is the matrix form of numbers or also known as 2-D array.");
    return 0;
}
