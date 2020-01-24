#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N;
    printf("Enter the number of students : ");
    scanf("%d",&N);
    char s[N][10];
    int score[N];
    int grade[N];
    for (i=0;i<N;i++){
        printf("Student #%d",i+1);
        printf("\tName :");
        scanf("%s",s[i]);
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
    printf("ID\tName\tScore\tGrade\n");
    printf("-----------------------------------\n");
    for (i=0;i<N;i++){
        printf("%03d\t%s\t%d\t%c\n",i+1,s[i],score[i],grade[i]);
    }

    return 0;
}
