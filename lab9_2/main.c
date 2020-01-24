#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,N,max=0,min;
    float sum=0,ave,sum2=0,sum3=0,sum4=0;
    printf("Enter number of scores:");
    scanf("%d",&N);

    float score[N];
    for (i=0;i<N;i++){
        printf("Enter the %d-th score:",i);
        scanf("%f",&score[i]);

    if (max<score[i]) max=score[i];
    if (min>score[i]) min=score[i];
    }
    for (i=0;i<N;i++){
    sum = sum+score[i];
    ave= sum/N;
    }
    for (i=0;i<N;i++){
    sum2= sum2+(pow((score[i]-ave),2));//ผลรวมของ(xi-x)^2
    sum3 = sum2/(N-1);
    sum4=sqrt(sum3);
    }


    printf("Maximum score is %d \n",max);
    printf("Minimum score is %d \n",min);
    printf("Average of score is %.2f\n",ave);
    printf("S.D. is %.2f",sum4);
    return 0;
}
