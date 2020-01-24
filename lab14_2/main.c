#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fileName[40];
    printf("Enter a file name to read : ");
    scanf("%30[^\n]s",fileName);
    FILE * fp;
    fp = fopen(fileName,"r");
      if (fp==NULL){
        printf("Error : %s does not exist",fileName);
        exit(1);
    }

    printf("-------------------------------------------------\n");
    printf("Student ID\tName\t\tScore\tGrade\n");
    printf("-------------------------------------------------\n");

    int n;
    int id,score;
    char name[40];
    char lname[40];

    while(feof(fp)==0){
    n=fscanf(fp,"%d",&id);
    if(n<0){
        break;
    }
    n=fscanf(fp,"%s",name);
    n=fscanf(fp,"%s",lname);
    n=fscanf(fp,"%d",&score);

    printf("%d\t\t%s %s\t%d",id,name,lname,score);
    if ((score>=80)&&(score<=100)){
        printf("\tA\n");
    }else if ((score>=70)&&(score<=80)){
        printf("\tB\n");
    }else if ((score>=60)&&(score<=70)){
        printf("\tC\n");
    }else if ((score>=50)&&(score<=60)){
        printf("\tD\n");
    }else if (score<50){
        printf("\tF\n");
    }

    }

    fclose(fp);



    return 0;
}
