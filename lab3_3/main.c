#include <stdio.h>
#include <stdlib.h>

int main()
{
     char name[40] = "Wassana Thaprabmart";
    float distance ;
    float velocity ;

    printf("Input your name : ");
    scanf("%s",name);
    printf("Input Distance (KM) : ");
    scanf("%f",&distance);
    printf("Input avg velocity (KM/H) : ");
    scanf("%f",&velocity);

    float Time = distance/velocity;

    int TimeA = (float)Time*60*60;
    int TimeH = distance/velocity;
    int TimeM = ((float)distance/velocity-TimeH)*60;
    int TimeS = TimeA-(TimeH*60*60+TimeM*60);

    printf("My name is %s\n",name);
    printf("Distance between house and school : %.2f KMs\n",distance);
    printf("I walk by velocity (KM / Hour) : %.2f\n",velocity);
    printf("Time from home to school : %d Hours , %d mins ,%d secs\n",TimeH ,TimeM ,TimeS);


    return 0;
}
