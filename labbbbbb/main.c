#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=1,N=5;
   int work[5],mid[5],finals[5],sum[5];

   for (i=1;i<N;i++) {
    printf("Work score [%d]: ",i);
    scanf("%d",&work[i]);
   }
   for (i=1;i<N;i++) {
    printf("Midterm score [%d]: ",i);
    scanf("%d",&mid[i]);
   }
   for (i=1;i<N;i++) {
    printf("Final score [%d]: ",i);
    scanf("%d",&finals[i]);
   }
   for (i=1;i<N;i++) {
    sum[i]=work[i]+mid[i]+finals[i];
    printf("\nTotal score [%d] = %d: ",i,sum[i]);
   }
   printf("\nNo\tWork\tMidterm\tFinal\tTotal\n");
   for (i=1;i<=N;i++) {
    printf("%d\t%d\t%d\t%d\t%d\n",i,work[i],mid[i],finals[i],sum[i]);
   }



    return 0;
}
