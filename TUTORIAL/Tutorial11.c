#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);
  
    printf("Enter your marks\n");
    scanf("%d", &marks);
    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks is 45\n");
            break;
        
        default:
        printf("Your marks is not 45\n");
            break;
        }
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23\n");
        break;

    default:
        printf("Age is not 3, 13 or 23\n");

        break;
    }

    return 0;
}
