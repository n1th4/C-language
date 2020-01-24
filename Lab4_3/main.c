#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    char last[20];
    int cmath;
    int ceng;
    float gmath;
    float geng;
    printf("Enter first name : ");
    scanf("%s",name);
    printf("Enter last name : ");
    scanf("%s",last);
    printf("Mathematic : #credit #grade(0-4) : ");
    scanf("%d%f",&cmath,&gmath);
    printf("English : #credit #grade(0-4) : ");
    scanf("%d%f",&ceng,&geng);

    float gpa=((cmath*gmath)+(ceng*geng))/(cmath+ceng);

    printf("GPA of Wassana Thaprabmart is %.2f ",gpa);
    return 0;
}
