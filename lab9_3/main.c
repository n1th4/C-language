#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int j,k,n,a=0,e=0,i=0,o=0,u=0;
    char s[50];
    printf("Enter word:");
    scanf("%s",s);
    n=strlen(s);
    //printf("string lendge: %d\n",n);

    for(j=0;j<n;j++){
        if (s[j]=='a'){
            a=a+1;
        }
        if (s[j]=='e'){
            e=e+1;
        }
        if (s[j]=='i'){
            i=i+1;
        }
        if (s[j]=='o'){
            o=o+1;
        }
        if (s[j]=='u'){
            u=u+1;
        }
    //printf("a=%d\ne=%d\ni=%d\no=%d\nu=%d\n",a,e,i,o,u);
    //printf("------------------------------------------\n");

    }
    printf("a:");
    for(j=0;j<a;j++){
       printf("*");
        }
       printf("\ne:");
    for(j=0;j<e;j++){
       printf("*");
        }
        printf("\ni:");
    for(j=0;j<i;j++){
       printf("*");
        }
        printf("\no:");
    for(j=0;j<o;j++){
       printf("*");
        }
       printf("\nu:");
    for(j=0;j<u;j++){
       printf("*");
        }
        printf("\n");

    return 0;
}
