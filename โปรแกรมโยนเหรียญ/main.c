#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int cAns;
    int uAns;

    cAns=rand()%2;
    printf("Head = 1\n");
    printf("Tail = 0\n");
    printf("Head or Tail : ");
    scanf("%d",&uAns);

    printf("Your answer is %d,Com answer is %d\n",uAns,cAns);

    if (cAns==uAns) {
        printf("Answer is correct");
    }else{
        printf("Answer is wrong");
    }

    return 0;
}
