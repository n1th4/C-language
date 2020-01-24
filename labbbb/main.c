#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[40];
    int score,i,N;
    printf("Input Number Student : ");
    scanf("%d",&N);

    for (i=0;i<N;i++) {
        printf("Input Name : ");
        scanf("%s",name);
        printf("Input score : ");
        scanf("%d",&score);
    }
    return 0;
}
