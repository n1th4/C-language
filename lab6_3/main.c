#include <stdio.h>
#include <stdlib.h>
int main()
{
    int b7,b6,b5,b4,b3,b2,b1,b0,ch;
    printf("1.Convert Binary to Decimal\n");
    printf("2.Convert Binary to Octal\n");
    printf("3.Convert Binary to Hexadecimal\n");
    printf("4.Exit\n");
    printf("Choose a choice: ");
    scanf("%d",&ch);
    printf("Input Binary number (8 digits) : ");
    scanf("%d %d %d %d %d %d %d %d",&b7,&b6,&b5,&b4,&b3,&b2,&b1,&b0);
    if ((b7,b6,b5,b4,b3,b2,b1,b0!=1)&&(b7,b6,b5,b4,b3,b2,b1,b0!=1)){
        ch=0;
        printf("Error! digit must be 1 or 0");
    }
    if (ch==1) {
        printf("Binary number is %d%d%d%d%d%d%d%d\n",b7,b6,b5,b4,b3,b2,b1,b0);
        int dec=((b7*128)+(b6*64)+(b5*32)+(b4*16)+(b3*8)+(b2*4)+(b1*2)+(b0*1));
        printf("Decimal is %d \n",dec);
    }else if (ch==2){
        printf("Binary number is %d%d%d%d%d%d%d%d\n",b7,b6,b5,b4,b3,b2,b1,b0);
        int oct1=((b7*0)+(b6*4)+(b5*2)+(b4*1));
        int oct2=((b2*4)+(b1*2)+(b0*1));
        printf("Octal is %d%d",oct1,oct2);
    }else if (ch==3) {
        printf("Binary number is %d%d%d%d%d%d%d%d\n",b7,b6,b5,b4,b3,b2,b1,b0);
        int hex1=((b7*8)+(b6*4)+(b5*2)+(b4*1));
        int hex2=((b3*8)+(b2*4)+(b1*2)+(b0*1));
        if ((hex1>=10)&&(hex2>=10)){
            printf("Hexadecimal is %c%c",hex1+55,hex2+55);
        }
        if ((hex1>=10)&&(hex2<=9)){
            printf("Hexadecimal is %c%c",hex1+55,hex2+48);
        }
        if ((hex1<=9)&&(hex2<=9)){
            printf("Hexadecimal is %c%c",hex1+48,hex2+48);
        }
        if ((hex1<=9)&&(hex2>=10)){
            printf("Hexadecimal is %c%c",hex1+48,hex2+55);
        }

    }



    return 0;


}
