#include <stdio.h>
#include <conio.h>

// if(to make this programm, interestable)
// {
//     printf("plz enter all digits upto '10'      ");
// }
// else
// {
//     printf("jb upr wali bat hi na man rha, to ye wali dekhne hi kyu aa rha h")
// }

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
        printf("\n Enter your choice 1 for cash withdraw,\n Enter your choice 2 for changing password,\n Enter your choice 3 to talk with customer care,\n Enter your choice 4 to check balance, and \n Enter your choice 5 to deposit cash\n");

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
            if (choice < 10)
            {
                printf("Are gariib bhg ja yha se");
            }
            else
            {
                printf("Wha bete!,\n bahoot bdi wali khujli h tere andr to");
            }
            break;
        }
    }
}
int tanuj()
{
    printf("abe gariib paisa na h tere khate me");
}
int hero()
{
    printf("bs roj aakr  password hi bdle h, abe  kuch aur bhi kr le kr, gariib");
}
int super()
{
    printf("are garib hm na kr rhe to su bat");
}
int protector()
{
    printf("abe garib kuch na h ya me, dhre dhre pisa na bde kre h ya me");
}
int daringwaz()
{
    printf("abe garib  1 rupee jma na kre hain ");
}