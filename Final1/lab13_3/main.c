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
void search(int key,struct Students stu[N],int n){
    int i=0;
    int found=0;
    for (i=0;i<n;i++){
        if(key==stu[i].id){
            found = 1;
            printf("*** Found student ***\n");
            printStudent(stu[i]);
            break;

        }
    }
    if (found==0){
        printf("!!! Student not found !!!");
    }


}
int main()
{

    struct Students stds[N];
    int n,key,i=0;
    char cont;
    printf("Enter the number of student : ");
    scanf("%d",&n);

    for (i=0;i<n;i++){

    inputStudent(stds,i);

}
    printf("====== Students =======\n");
    for (i=0;i<n;i++){
        printStudent(stds[i]);
    }
    do{

    printf("====== Student search =======\n");
    printf("Enter Student ID : ");
    scanf("%d",&key);
    search(key,stds,n);
    printf("\nDo you want to continue? (y/n) ");
    scanf("%*c%c",&cont);
    }while (cont=='y'||cont=='y');

    return 0;
}

