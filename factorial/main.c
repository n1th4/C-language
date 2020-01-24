#include <stdio.h>
#include <stdlib.h>
int fact(int n){
    if (n<=1){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int N;
    int nfact;
    printf("Input number: ");
    scanf("%d",&N);
    nfact=fact(N);
    printf("! = %d",nfact);

    return 0;
}
