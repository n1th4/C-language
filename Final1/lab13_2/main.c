#include <stdio.h>
#include <stdlib.h>
#define N 50
struct Students{
    int no;
    int id;
    char name[20];
    int score;
};
void printStudent(struct Students s){
         printf("-------- No. %d ---------\n",s.no);
         printf("Student ID : %d\n",s.id);
         printf("Name       : %s\n",s.name);
         printf("Score      : %d\n",s.score);

}
void inputStudent(struct Students std[N],int i){

        std[i].no=i+1;
        printf("No.%d",std[i].no);
        printf("\tStudent ID : ");
        scanf("%d",&std[i].id);
        printf("\tName : ");
        scanf("%s",std[i].name);
        printf("\tScore : ");
        scanf("%d",&std[i].score);

    }

int main()
{

    struct Students stds[N];
    int n,i=0;
    printf("Enter the number of student : ");
    scanf("%d",&n);

    for (i=0;i<n;i++){

    inputStudent(stds,i);

}
    printf("====== Students =======\n");
    for (i=0;i<n;i++){
        printStudent(stds[i]);
    }

    return 0;
}
