#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int i,N;
    printf("Enter the number of students : ");
    scanf("%d",&N);
    char str[N][10];
    int score[N];
    int grade[N];
    int no[N];
    for (i=0;i<N;i++){
        no[i]=i+1;
        printf("Student #%d",i+1);
        printf("\tName :");
        scanf("%s",str[i]);
        printf("\t\tScore :");
        scanf("%d",&score[i]);
        if (score[i]>=80){
            grade[i] = 65;
        }else if((score[i]>=70)&&(score[i]<80)){
            grade[i] = 66;
        }else if((score[i]>=60)&&(score[i]<70)){
            grade[i] = 67;
        }else if((score[i]>=50)&&(score[i]<60)){
            grade[i] = 68;
        }else if(score[i]<=50){
            grade[i] = 70;
        }
        //printf("Name %s score %d grade [%d] = %c\n",s[i],score[i],i+1,grade);
    }
    //

    printf("-----------------------------------\n");
    printf("NO.\tID\tName\tScore\tGrade\n");
    printf("-----------------------------------\n");
    for (i=0;i<N;i++){
        //printf("%d\t%03d\t%s\t%d\t%c\n",i+1,no[i],str[i],score[i],grade[i]);
    }

    int swflag=1;
    int tmp;
    char str2[10];
    while (swflag==1)
    {
            swflag=0;

        for (i=0;i<N-1;i++)
        {

            if (score[i]<score[i+1])
            {
            tmp=score[i];
            score[i]=score[i+1];
            score[i+1]=tmp;


            tmp=no[i];
            no[i]=no[i+1];
            no[i+1]=tmp;

            tmp=grade[i];
            grade[i]=grade[i+1];
            grade[i+1]=tmp;

            strcpy(str2,str[i]);
            strcpy(str[i],str[i+1]);
            strcpy(str[i+1],str2);
            swflag=1;
            }
        }
    }

  for (i=0;i<N;i++){
        printf("%d\t%03d\t%s\t%d\t%c\n",i+1,no[i],str[i],score[i],grade[i]);
    }




    return 0;
}
