#include <stdio.h>
#include <stdlib.h>
#define N 3
struct Students{
    int id;
    char name[30];
    char major[5];
}student;
void printStudent(struct Students S[N]){
    int i=0;
    for(i=0;i<N;i++){
        printf("Student ID : %d\n",S[i].id);
        printf("Student Name : %s\n",S[i].name);
        printf("Student Major : %s\n",S[i].major);
    }

}
int main()
{
    struct Students student[N];
    int i=0;
    for (i=0;i<N;i++){
        printf("Input Student ID : ");
        scanf("%d",&student[i].id);
        printf("Input Student Name : ");
        scanf("%s",&student[i].name);
        printf("Input Student Major : ");
        scanf("%s",&student[i].major);
    }
    printStudent(student);
    return 0;
}
