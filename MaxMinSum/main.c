#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N,inp,max=0,min,in;
    printf("Enter the number of entries: ");
    scanf("%d",&N);
    for (i=1;i<=N;i++) {
        printf("\nEnter a number for entry %d :",i);
        scanf("%d",&inp);

        if (max<inp){
                max=inp;
       }
        if (min>inp) {
                min=inp;
        }

    }
    int sum = in ;

    printf("min is %d\n",min);
    printf("max is %d\n",max);
    printf("sum is %d",sum);

    return 0;
}
