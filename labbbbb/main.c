#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,n,inp;
    int Max=0,Min=0,sum=0;
    float sAverage;

    do{
    printf("Enter the number of entries: ");
    scanf("%d",&n);
    if(n<0){
        printf("Please enter a positive integer !\n");
    }
    }while(n<0);
    //system("cls");
    do{
    for(i=1;i<=n;i++){

        printf("\nEnter the number for entries %d: ",i);
        scanf("%d",&inp);
        if(i==0){
            Min = inp;
            Max = inp;
        }

        if(Max<inp) Max = inp;
        if(Min>inp) Min = inp;
        sum += inp;
        sAverage = (float)sum/n;
    }
    }while(i<n);
    printf("Min = %d\n",Min);
    printf("Max = %d\n",Max);
    printf("Sum = %d\n",sum);
    printf("Average = %.2f\n",sAverage);

    return 0;
}
