#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 8;
    const float b = 7.333;
    // PI = 7.33;  //wrong(can not do this) since PI is a constant
    printf("my backslash\t \a \\n %f\n", PI);
    // b = 7.22;  //wrong(can not do this) since b is a constant (by adding const before datatype 'float')
    // printf("Hello World\n");
    // printf("The value of a is %d and the value of b is %f and tanuj%18.5ftanuj and tanuj%-18.65ftanuj\n", a, b, b, b);
    // printf("%-0.36f\n", b);

    return 0;
}
