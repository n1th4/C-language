#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i=0,j=0;
     char s1[100],s2=[100];
     printf("Input string1 : ");
     scanf("%s",s1);
      printf("Input string2 : ");
     scanf("%s",s2);

     while (s1[i]!='\0'){
        i++;
     }
      while (s2[j]!='\0'){
            s1[i]=s2[j];
        j++;
     }
     printf("String = %s%s",s1,s2);
    return 0;
}
