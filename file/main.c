#include <stdio.h>
#include <stdlib.h>
#define N 10
struct Book{
    int id;
    char title[10];
    int price;
};
int main()
{
    int N,i=0;
    struct Book book[N];
    FILE *fbook;
    fbook=fopen("book.dat","w");
    if (fbook==NULL){
        printf("can not open");
        exit(1);
    }
    printf("input N : ");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("input id : ");
        scanf("%d",&book[i].id);
        printf("input title : ");
        scanf("%s",&book[i].title);
        printf("input price : ");
        scanf("%d",&book[i].price);
        fwrite(&book[i],sizeof(struct Book),1,fbook);
    }
    return 0;
}
