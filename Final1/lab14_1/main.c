#include <stdio.h>
#include <stdlib.h>
#define N 10



int main()
{
    int n;
    int id;
    char name[20];
    int score;
    char fileName[40];
    FILE * fp;

    printf("Please enter a file name to write: ");
    scanf("%s",fileName);

    fp = fopen(fileName,"w");
    if (fp==(NULL)){
        printf("Error: the file could not be created.");
        exit(1);
    }
    printf("Enter the number of students :");
    scanf("%d",&n);
    int i=0;

    for(i=0;i<n;i++){
    printf("No. %d",i+1);
    printf("\tStudent ID : ");
    scanf("%d%*c",&id);
    printf("      \tName : ");
    scanf("%30[^\n]s",name);
    printf("      \tScore : ");
    scanf("%d",&score);
    fprintf(fp,"%d\t%s\t%d\n",id,name,score);
    }
    fclose(fp);
    return 0;
}
