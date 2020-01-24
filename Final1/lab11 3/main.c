#include <stdio.h>
#include <stdlib.h>
#define maxcol 100
void DotProductByColumn(int A[maxcol][maxcol],int B[maxcol][maxcol],int nrow,int ncol)
{
    int i,j,sum=0,column=0;
    for(i=0; i<nrow; i++)
    {
        for(j=0; j<ncol; j++)
        {
            column=A[j][i]*B[j][i];
            sum+=column;
        }
            printf("%d ",sum);
            sum=0;
    }
     printf("\n");

}void DotProductByRow(int A[maxcol][maxcol],int B[maxcol][maxcol],int nrow,int ncol)
{
    int i,j,sum=0,row=0;
    for(i=0; i<nrow; i++)
    {
        for(j=0; j<ncol; j++)
        {
            row=A[i][j]*B[i][j];
            sum+=row;
        }
         printf("%d\n",sum);
         sum=0;
    }

}
void PrintMatrix(int C[maxcol][maxcol],int nrow,int ncol)
{
    int i,j;
    for (i=0; i<nrow; i++)
    {
        for (j=0; j<ncol; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");

    }

}

int main()
{
    int a,b;

    do{
    printf("Enter number of rows: ");
    scanf("\n%d",&a);
    }while(a<0||a>100);
    do{
    printf("Enter number of columns: ");
    scanf("\n%d",&b);
    }while(b<0||b>100);

    int A[maxcol][maxcol],B[maxcol][maxcol];
    int i,j;

    printf("Enter each element of the matrix A: \n");

    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("x[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter each element of the matrix B: \n");

    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("x[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    printf("Matrix A:\n");
    PrintMatrix(A,a,b);

    printf("Matrix B:\n");
    PrintMatrix(B,a,b);

    printf("Column dot product output:\n");
    DotProductByColumn(A,B,a,b);

    printf("Row dot product output:\n");
    DotProductByRow(A,B,a,b);

     return 0;
}

