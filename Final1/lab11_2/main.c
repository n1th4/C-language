#include <stdio.h>
#include <stdlib.h>
#define maxcol 100
void cpyMaxtrix(int m1[maxcol][maxcol],int m2[maxcol][maxcol],int row,int col)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            m2[i][j]=m1[i][j];
        }
    }

}
void transMaxtrix(int m1[maxcol][maxcol],int m2[maxcol][maxcol],int row,int col)
{
    int i,j;
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
             m2[i][j]=m1[j][i];
        }
    }

}
void PrintMatrix(int m[maxcol][maxcol],int row,int col)
{
    int i,j;
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");

    }

}

int main()
{
    int a,b;

    do
        {
        printf("Enter number of rows: ");
        scanf("\n%d",&a);
        }while(a<0||a>100);

    do
        {
        printf("Enter number of columns: ");
        scanf("\n%d",&b);
        }while(b<0||b>100);

    int M1[maxcol][maxcol],M2[maxcol][maxcol],M3[maxcol][maxcol];
    int i,j;

    printf("Enter each element of the input matrix: \n");

    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("x[%d][%d]=",i,j);
            scanf("%d",&M1[i][j]);
        }
    }

    printf("Source matrix\n");

    /*for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d ",M1[i][j]);
        }
        printf("\n");
    }*/

    PrintMatrix(M1,a,b);
    cpyMaxtrix(M1,M2,a,b);


    printf("Destination matrix after copying\n");
    /*for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }*/
    PrintMatrix(M2,a,b);



    printf("Transpose matrix of x\n\n");
    transMaxtrix(M1,M3,a,b);
    PrintMatrix(M3,b,a);
     /*for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }*/

    return 0;

}
