// kms to miles
// inches to foot
// cms to inches
// pounds to kgs
// inches to metres
#include <stdio.h>
int main()
{
    char input;
    float ktm = 0.621371;
    float itf = 0.083333;
    float cti = 0.393701;
    float ptk = 0.453592;
    float itm = 0.0254;
    float first,second;
    while (1)
    {
        printf("Choose the desired option:\n1.kms to miles\n2.inches to foot\n3.cms to inches\n4.pounds to kgs\n5.inches to metres\nPress q to Quit\n");
        scanf(" %c", &input);
        switch (input)
        {
        case 'q':
            printf("Quitting the prorgam.....\nThank you for choosing us. Have a good day ahead :)\n");
            goto end;
            break;
        case '1':
            printf("Enter the quantity in terms of first unit:-\n");
            scanf("%f", &first);
            second=first*ktm;
            printf("%f kilometers is equal to %f miles\n",first,second);
            break;
        case '2':
            printf("Enter the quantity in terms of first unit:-\n");
            scanf("%f", &first);
            second=first*itf;
            printf("%f inches is equal to %f feet \n",first,second);
            break;
        case '3':
            printf("Enter the quantity in terms of first unit:-\n");
            scanf("%f", &first);
            second=first*cti;
            printf("%f centimetres is equal to %f inches \n",first,second);
            break;
        case '4':
            printf("Enter the quantity in terms of first unit:-\n");
            scanf("%f", &first);
            second=first*ptk;
            printf("%f pounds is equal to %f kilograms \n",first,second);
            break;
        case '5':
            printf("Enter the quantity in terms of first unit:-\n");
            scanf("%f", &first);
            second=first*itm;
            printf("%f inches is equal to %f metres \n",first,second);
            break;
        default:
            break;
        }
    }
    end:
    return 0;
}   