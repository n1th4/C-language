#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int comp1,comp2,user1,user2;
    char cont;
    comp1=rand()%2;
    comp2=rand()%2;
    do{
    printf("Guess the flipping coin(1 for heads,0 for tails): \n");
    printf("Enter the first answer : ");
    scanf("%d",&user1);
    printf("Enter the second answer : ");
    scanf("%d%*c",&user2);
    printf("Your answer is %d-%d,Com answer is %d-%d",user1,user2,comp1,comp2);
    if ((comp1==user1)&&(comp2==user2)) {
        printf(" Your answer correct");
    }else{
        printf(" Your ans wrong!");
    }
    printf("\nDo you want to continue? (y/n)");
    scanf("%c",&cont);
    }while ((cont=='Y')||(cont=='y'));
    return 0;
}
