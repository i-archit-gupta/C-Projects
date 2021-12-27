/*Take input from user and ask user to enter 1 for triangular star pattern and 2 for reversed triangular star pattern.
Then print the pattern accordingly.

Triangular Star Pattern:-

*
**
***
****

Reversed Triangular Star Pattern:-

****
***
**
*
*/

#include <stdio.h>
int main()
{
    int n, r, r1, i, j;
    printf("Choose the desired option for printing pattern\n1.Triangular Star Pattern\n2.Reversed Triangular Star Pattern\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:

        printf("Enter the number of rows you want:");
        scanf("%d", &r);
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        return 0;

    case 2:

        printf("Enter the number of rows you want:");
        scanf("%d", &r1);
        for (i = r1; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        return 0;
    default:
        printf("Invalid Input. Please Try Again");
    }
    return 0;
}
