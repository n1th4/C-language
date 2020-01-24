#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float d1;
    float d2;
    char Operator;
    float result;
    printf("Input Decimal Number1: ");
    scanf("%f",&d1);
    printf("Input Decimal Number2: ");
    scanf("%f%*c",&d2);
    printf("Press Operator do you want to Process (+,-,*,/,^): ");
    scanf("%c",&Operator);

    if (Operator=='+') {
            result=d1+d2;
            printf("Result %g %c %g = %g\n",d1,Operator,d2,result);
    }
    if (Operator=='-') {
            result=d1-d2;
            printf("Result %g %c %g = %g\n",d1,Operator,d2,result);
    }
    if (Operator=='*') {
            result=d1*d2;
            printf("Result %g %c %g = %g\n",d1,Operator,d2,result);
    }
    if (Operator=='/') {
            result=d1/d2;
            printf("Result %g %c %g = %g\n",d1,Operator,d2,result);
    }
    if (Operator=='^') {
            result=pow(d1,d2);
            printf("Result %g %c %g = %g\n",d1,Operator,d2,result);
    }
    return 0;
}
