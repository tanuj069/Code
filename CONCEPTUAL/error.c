#include <stdio.h>
#include <string.h>
struct book
{
    char bname[20];
    int bpage;
    float bprice;
};
int main()
{
    int i;
    struct book x[3];
    printf("enter the 3 books name, page and price");
    for (i = 0; i <= 3; i++)
    {
        scanf("%s %d %f", x[i].bname, &x[i].bpage, &x[i].bprice);
    }
    for (i = 0; i < 3; i++)
    {
        printf("book no. %d=%s\n book page=%d\nbook price=%d\n", i, x[i].bname, x[i].bpage, x[i].bprice);
    }

    return 0;
}