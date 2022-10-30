#include <stdio.h>
#include <conio.h>

int tanuj();
int hero();
int super();
int protector();
int daringwaz();

int choice;
int main()
{
    for (;;)
    {
        printf("Enter your choice 1 for cash withdraw, Enter your choice 2 for changing password, Enter your choice 3 to talk with customer care, Enter your choice 4 to check balance, and Enter your choice 5 to deposit cash");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            tanuj();
            break;
        case 2:
            hero();
            break;
        case 3:
            super();
            break;
        case 4:
            protector();
            break;
        case 5:
            daringwaz();
            break;

        default:
            printf("Are gariib bhg ja yha se");
            break;
        }
    }
}
int tanuj()
{
    printf("abe gariib paisa no h tere khate me");
}
int hero()
{
    printf("bs roj aakr  password hi bdle h, abe janaab kuch aur bhi kr le kr, gariib");
}
int super()
{
    printf("are garib hmne kr rhe to su bat");
}
int protector()
{
    printf("abe garib kuch no h ya me, dhre dhre pisa na bde kre h yo me");
}
int daringwaz()
{
    printf("abe garib  1 rupee jma na h kre h");
}