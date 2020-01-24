#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    char b7,b6,b5,b4,b3,b2,b1,b0;
    char hex1,hex2;
    printf("Input Binary Number (8 digits) : ");
    scanf("%c%c%c%c%c%c%c%c",&b7,&b6,&b5,&b4,&b3,&b2,&b1,&b0);
    printf("Binary number is %c%c%c%c%c%c%c%c\n",b7,b6,b5,b5,b3,b2,b1,b0);

    hex1=((b7*8)+(b6*4)+(b5*2)+(b4*1)-720);
    hex2=((b3*8)+(b2*4)+(b1*2)+(b0*1)-720);


    if ((hex1>=10) && (hex2<=9)) {
            printf("Hexadecimal is %c%c",hex1+55,hex2+'0');
    }
    if ((hex1<=9) && (hex2>=10)) {
            printf("Hexadecimal is %c%c",hex1+'0',hex2+55);
    }
    if ((hex1>=10) && (hex2>=10)) {
            printf("Hexadecimal is %c%c",hex1+55,hex2+55);
    }
    if ((hex1<=9) && (hex2<=9)) {
            printf("Hexadecimal is %c%c",hex1+'0',hex2+'0');
    }
    return 0;
}
