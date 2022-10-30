#include <stdio.h>

int main()
{
    /* char a;
    printf("Enter any word\n");
    scanf("%c\n", a);
    if (a == 'y')*/
    {//tanuj
        int choice;
        float n;
        printf("Enter your interested conversion\n");
        printf("As follows:\n1 for kms to miles\n2 for inches to foot\n3 for cms to inches\n4 for pound to kg\n5 for inches to meters\n");
        scanf("%d", &choice);
        printf("Enter your required number\n");
        scanf("%f", &n);

        switch (choice)
        {
        case 1: //kms to miles//
            printf("%fkilometers = %fmiles\n", n, n / 1.609);
            break;

        case 2: //inches to foot//
            printf("%finches = %ffoot\n", n, n / 12);
            break;

        case 3: //cms to inches//
            printf("%fcentimeters = %finches\n", n, n / 2.54);
            break;

        case 4: //pound to kgs//
            printf("%fpounds = %fkilograms\n", n, n / 2.205);
            break;

        case 5: //inches to meters//
            printf("%finches = %fmeters\n", n, n / 39.37);
            break;

        default:
            printf("Sorry you typed an invalid option for conversion\n");
            break;
        }
    }
    /* else
    {
        //Variable declaration
        int choice, choice2;
        float n;

        //Input from user
        printf("Enter your interested conversion\n");
        printf("As follows:\nType 1 for kms to miles or miles to kms\nType 2 for inches to foot or foot to inches\nType 3 for cms to inches or inches to cms\nType 4 for pound to kgs or kgs to pound\nType 5 for inches to meters or meters to inches\n");
        scanf("%d", &choice);

        //conditions
        switch (choice)
        {
        case 1: //kms to miles//
            printf("You selected 1 for inches to foot or foot to inches.(Type 1 for kms to miles or 2 for miles to kms)\n");
            scanf("%d", &choice2);
            if (choice2 == 1)
            {
                printf("Enter you length:");
                scanf("%f", &n);
                printf("%f kms = %f miles", n, n / 1.609);
            }
            else if (choice2 == 2) //miles to kms

            {
                printf("Enter you length:");
                scanf("%f", &n);
                printf("%f miles = %f kms", n, n * 1.609);
            }
            else
            {
                printf("Sorry you typed an invalid option\n");
            }
            break;

        case 2: //inches to foot//
            printf("You selected 2 for inches to foot or foot to inches.(Type 1 for inches to foot or 2 for foot to inches)\n");
            scanf("%d", &choice2);
            if (choice2 == 1)
            {
                printf("Enter you length:");
                scanf("%f", &n);
                printf("%f inches = %f foot", n, n / 12);
            }
            else if (choice2 == 2) // foot to inches
            {
                printf("Enter you length:");
                scanf("%f", &n);
                printf("%f foot = %f inches", n, n * 12);
            }
            else
            {
                printf("Sorry you typed an invalid option\n");
            }
            break;

        case 3: //cms to inches//
            printf("You selected 3 for cms to inches or inches to cms.(Type 1 for cms to inches or 2 for inches to cms)\n");
            scanf("%d", &choice2);
            if (choice2 == 1)
            {
                printf("Enter you length:");
                scanf("%f", &n);
                printf("%f cms = %f inches", n, n / 2.54);
            }
            else if (choice2 == 2) // inches to cms
            {
                printf("Enter you length:");
                scanf("%f", &n);
                printf("%f inches = %f cms", n, n * 2.54);
            }
            else
            {
                printf("Sorry you typed an invalid option\n");
            }
            break;

        case 4: //pound to kgs//

            printf("You selected 4 for pound to kgs or kgs to pound.(Type 1 for pound to kgs or 2 for kgs to pound)\n");
            scanf("%d", &choice2);
            if (choice2 == 1)
            {
                printf("Enter you mass value:");
                scanf("%f", &n);
                printf("%f pound = %f kgs", n, n / 2.205);
            }
            else if (choice2 == 2) // kgs to pound
            {
                printf("Enter you mass value:");
                scanf("%f", &n);
                printf("%f kgs = %f pound", n, n * 2.205);
            }
            else
            {
                printf("Sorry you typed an invalid option\n");
            }
            break;
        case 5: //inches to meters//

            printf("You selected 5 for inches to meters or meters to inches.(Type 1 for inches to meters or 2 for meters to inches)\n");
            scanf("%d", &choice2);
            if (choice2 == 1)
            {
                printf("Enter you length:");
                scanf("%f", &n);
                printf("%f inches = %f meters", n, n / 39.37);
            }
            else if (choice2 == 2) //meters to inches

            {
                printf("Enter you mass value:");
                scanf("%f", &n);
                printf("%f meters = %f inches", n, n * 39.37);
            }
            else
            {
                printf("Sorry you typed an invalid option\n");
            }
            break;

        default:
            printf("Sorry you typed an invalid option for conversion\n");
            break;
        }
    }*/

    return 0;
}