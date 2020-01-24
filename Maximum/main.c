#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i=0;
    int max=0;
    int inpNo;
    printf("Input Number of data :");
    scanf("%d",&N);
     for (i=0;i<N;i++){
        printf("Input new number : ");
        scanf("%d",&inpNo);
        if (max<inpNo){
            max=inpNo;
            printf("New max number is %d\n",max);
        }
     }
     printf("Max No is %d",max);
    return 0;
}
