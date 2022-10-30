#include <stdio.h>

int main()
{
    char n, m, s, ms;

    printf("Enter the first letter of your subject, for which you have passed \nand write 'd' for both exam\n");
    scanf("%c%c", &n);

    if (n == 'd')
    {
        printf("Congratulation you have passed your math as well as science exam, since your gift prize is $45\n");
    }
    else if (n == 'm')
    {
        printf("Congratulation you have passed your math exam, your gift prize is $15\n");
    }
    else if (n == 's')
    {
        printf("Congratulation you have passed your science exam, your gift prize is $15\n");
    }
    else
    {
        printf("sorry! you are going to try wrong approach, there is no subject, which you are trying\n");
    }

    return 0;
}

// #include <stdio.h>

// int main(){
//     int a;
//     printf("Which of the subjects have you passed? \n");
//     printf("Type 1 for maths, 2 for Science, 3 for both maths and science \n");
//     scanf("%d", &a);

//     if(a == 1){
//         printf("Wow!, you have won the prize of Rs15 for clearing the exam of Maths\n");
//     }
//     else if(a == 2){
//         printf("Wow!, you have won the prize of Rs15 for clearing the exam of Science\n");
//     }
//     else if(a == 3){
//         printf("Wow!, you have won the prize of Rs45 for clearing the exam of Maths and Science\n");
//     }
//     else
//     {
//         printf("Sorry! this choice is not given please select from the above given options.\n");
//     }

//     return 0;
// }