#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec;
    printf("Input decimal number: ");
    scanf("%d",&dec);

    int bb1=dec/2;
    int bb2=bb1/2;

    int b1=dec%2;
    int b2=bb1%2;
    int b3=bb2%2;

    printf("binary is %d %d %d",b3,b2,b1);
    return 0;
}
