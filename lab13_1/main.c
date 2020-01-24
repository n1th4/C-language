#include <stdio.h>
#include <stdlib.h>
#define N 50
struct Students{
    int id;
    char name[20];
    int score;
};

int main()
{
    struct Students std[N];
    int n,i=0;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("No.%d",i+1);
        printf("\tStudent ID : ");
        scanf("%d",&std[i].id);
        printf("\tName : ");
        scanf("%s",std[i].name);
        printf("\tScore : ");
        scanf("%d",&std[i].score);

    }
    printf("====== Students =======\n");
     for (i=0;i<n;i++){
         printf("-------- No. %d ---------\n",i+1);
         printf("Student ID : %d\n",std[i].id);
         printf("Name       : %s\n",std[i].name);
         printf("Score      : %d\n",std[i].score);
     }
    return 0;
}
