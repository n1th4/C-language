#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[40] ="Wassana Thaprabmart";
    float distance ; //Distance from my house to school in kilometer
    float velocity ; //Velocity in Kilometer per hour

    printf("Input your name :");
    scanf("%s",&name);
    printf("Input Distance (KM) :");
    scanf("%f",&distance);
    fflush(stdin);
    printf("Input avg velocity (KM/H) : ");
    scanf("%f",&velocity);

    float Time = distance/velocity;
    int TimeA = (float)Time*60*60;
    int TimeH = (float)distance/velocity;
    int TimeM = ((float)Time-TimeH)*60;
    int TimeS = TimeA-(TimeH*60*60+TimeM*60);

    printf("My name is %s\n",name);
    printf ("Distance between house and school : %.2f KMs\n",distance);
    printf("I walk by velocity (KM/hr) : %.2f\n",velocity);
    printf("Time from home to school  : %d Hours , %d mins , %d secs\n",TimeH ,TimeM ,TimeS);

    return 0;
}
