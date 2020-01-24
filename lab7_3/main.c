#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s1,s2,p1,p2;
    printf("Enter scores of Mathematic sub-testing (two times)!\n");
    printf("Enter a percentage of the first testing: ");
    scanf("%f",&p1);
    printf("Enter a percentage of the second testing: ");
    scanf("%f",&p2);

    float per=p1+p2;


    if (per!=100) {
        printf("Error: Invalid percentages\n");
    }

    if (per==100) {

        printf("Score1: ");
        scanf("%f",&s1);
        printf("Score2: ");
        scanf("%f",&s2);


        float score1=((p1/100)*s1);
        float score2=((p2/100)*s2);
        float allscore=score1+score2;

    if((allscore>=80)&&(allscore<=100)) {
        printf("You average score is %g, your grade is A",allscore);
    }
    else if((allscore>=70)&&(allscore<=79.99)) {
        printf("You average score is %g,your grade is B",allscore);
    }
    else if((allscore>=50)&&(allscore<=69.99)) {
        printf("You average score is %g, your grade is C",allscore);
    }
     else if((allscore>=30)&&(allscore<=49.99)) {
        printf("You average score is %g, your grade is D",allscore);
    }
     else if((allscore>=0)&&(allscore<=29.99)) {
        printf("You average score is %g, your grade is F",allscore);
    }
    }
    return 0;
}
