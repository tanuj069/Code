#include <stdio.h>
// Typecasting syntax
// (type) value;
int main()
{
    int a = 3;
    float b = 54;
    float d = 54/5;
    float c = (float)54/5;
    printf("The value of b is %d\n", (int) b);  
    printf("The value of c is %f\n", c);
    printf("The value of d is %f\n", d);
    return 0;
}