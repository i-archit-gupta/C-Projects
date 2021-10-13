#include <stdio.h>
int main()
{
    // One Dimensional Array
    int marks[10];
    float sum=0;
    int i;
    printf("Enter the marks of 10 students:\n\n");
    for ( i = 0; i < 10; i++)
    {
        printf("Marks of student %d is:",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    float avg=sum/10;
    printf("The average marks of 10 students are %f",avg);
    return 0;
}
