#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,inp,max=0,min,sum=0;
    float ave;
    do{
        printf("Enter the number of entries: ");
    scanf("%d",&N);
    if (N<0){
        printf("Please enter a positive integer!\n");
    }
    }while (N<0);
    do{
        for (i=1;i<=N;i++) {
        printf("\nEnter the number for entry %d: ",i);
        scanf("%d",&inp);


    if (max<inp) max=inp;
    if (min>inp) min=inp;
    sum += inp;
    ave= (float)sum/N;
    }
    }while (i<=N);
    ave= sum/N;
    printf("Min = %d\n",min);
    printf("Max = %d\n",max);
    printf("Sum = %d\n",sum);
    printf("Average = %.2f",ave);
    return 0;
}
