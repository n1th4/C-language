#include <stdio.h>
#include <stdlib.h>
#define N 15
int search(int D[N],int k)
{
    int i=0,r=-1;
    for(i=0;i<N;i++){
        if(k==D[i]){
            r=i;//��ҵ��˹觷�����������r
            break;
        }
    }
    return r;
}
int main()
{
    int result;
    int data[N]={9,8,7,6,10,16,30,40,50,90,81,34,30,60,99};
    int key=0;
    printf("Input key(0-99): ");
    scanf("%d",&key);
    result=search(data,key);
    if (result<0){
        printf("Not found");
    }else{
        printf("Found at %d\n",result);//�����˹觷��....
    }
    return 0;
}
