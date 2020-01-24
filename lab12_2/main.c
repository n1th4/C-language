#include <stdio.h>
#include <stdlib.h>
#define Col 20
#define Row 20
void InputMatrix(int M[][Col],int nrow,int ncol,char *label)
{
    int i=0,j=0;

    for(i=0;i<nrow;i++)
    {
        for(j=0;j<ncol;j++)
        {
        printf("%s[%d][%d] = ",label,i,j);
        scanf("%d",&M[i][j]);

        }
        printf("\n");
    }
}
void MultiplyMatrix(int Mul[][Col],int M1[][Col],int M2[][Col],int M1row,int M2row,int M2col)
{
    int i=0,j=0;
    int sum=0;
        for (i=0;i<M1row;i++)
        {
        for(j=0;j<M2col;j++)
        {
            Mul[i][j]= ((M1[i][0]*M2[0][j])+(M1[i][1]*M2[1][j])+(M1[i][2]*M2[2][j]));
            //printf("C[%d][%d] = %d\n",i,j,C[i][j]);
        }
        //printf("\n");
        }
}
void PrintMatrix(int M[][Col],int nrow,int ncol,char *label)
{
    int i=0,j=0;
    printf("---%s---\n",label);
    for (i=0; i<nrow; i++)
    {
        for (j=0; j<ncol; j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");

    }

}
int main()
{
    int i,j,Arow,Acol;
    printf("Innput A\n");
    printf("Row = ");
    scanf("%d",&Arow);
    printf("column = ");
    scanf("%d",&Acol);

    int A[Row][Col];
    InputMatrix(A,Arow,Acol,"A");

    int Brow,Bcol;
    printf("Innput B\n");
    printf("Row = ");
    scanf("%d",&Brow);
    printf("column = ");
    scanf("%d",&Bcol);

    int B[Row][Col];
    InputMatrix(B,Brow,Bcol,"B");
    int C[Row][Col];
    MultiplyMatrix(C,A,B,Arow,Brow,Bcol);

    PrintMatrix(A,Arow,Acol,"A");
    PrintMatrix(B,Brow,Bcol,"B");
    PrintMatrix(C,Arow,Bcol,"C");

    return 0;
}
