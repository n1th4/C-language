#include <stdio.h>
#include <stdlib.h>
#define maxcol 100
void cpyMatrix(int m1[][maxcol],int m2[][maxcol],int row,int col)
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

int main()
{
    int a,b;

    do{
    printf("Enter number of rows: ");
    scanf("%d",&a);
    }while(a<0||a>100);
    do{
    printf("Enter number of columns: ");
    scanf("%d",&b);
    }while(b<0||b>100);

    int M1[maxcol][maxcol],M2[maxcol][maxcol];
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
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d ",M1[i][j]);
        }
        printf("\n");
    }

    cpyMatrix(M1,M2,a,b);
    printf("Destination matrix after copying\n");
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
