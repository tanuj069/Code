#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n\n");
    int a = 76;
    int *ptra = &a;
    int *ptr;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %d\n\n", &ptra);
    printf("The address of a is %d\n\n", &a);
    printf("The address of a is %d\n\n", ptra);
    printf("The address of some garbage is %d\n", ptr);
    printf("The address of some garbage is %d\n\n", ptr2);
    printf("The value of a is %d\n\n", *ptra);
    printf("The value of a is %d\n\n\n\n\n", a);




    printf("The address of pointer to a is %p\n\n", &ptra);
    printf("The address of a is %p\n\n", &a);
    printf("The address of a is %p\n\n", ptra);
    printf("The address of some garbage is %p\n", ptr);
    printf("The address of some garbage is %p\n\n", ptr2);
    printf("The value of a is %d\n\n", *ptra);
    printf("The value of a is %p\n\n\n\n\n", a);

    printf("The value of pointer to a is %p\n", *ptra);
    printf("The values of a is %p\n\n", *ptra);

    printf("The address of pointer to a is %p     and %p\n", ptra, &a);
    printf("The address of a is %p     and %p\n\n\n", ptra, &a);

    printf("The value of pointer to a is %x\n", *ptra);
    printf("The values of a is %x\n\n", *ptra);

    printf("The address of pointer to a is %x     and %x\n", ptra, &a);
    printf("The address of a is %x     and %x\n\n\n", ptra, &a);

    printf("The value of pointer to a is %d\n", *ptra);
    printf("The values of a is %d\n\n", *ptra);

    printf("The address of pointer to a is %d     and %d\n", ptra, &a);
    printf("The address of a is %d     and %d\n\n\n", ptra, &a);
    return 0;
}