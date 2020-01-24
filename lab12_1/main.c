#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,An,Am;
    printf("Innput A\n");
    printf("Row = ");
    scanf("%d",&An);
    printf("column = ");
    scanf("%d",&Am);

    int A[An][Am];
    for(i=0;i<An;i++)
    {
        for(j=0;j<Am;j++)
        {
        printf("A[%d][%d] = ",i,j);
        scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    int Bm,L;
    printf("Innput B\n");
    printf("Row = ");
    scanf("%d",&Bm);
    printf("column = ");
    scanf("%d",&L);

    int B[Bm][L];
    for(i=0;i<Bm;i++)
    {
        for(j=0;j<L;j++)
        {
        printf("B[%d][%d] = ",i,j);
        scanf("%d",&B[i][j]);

        }
        printf("\n");
    }

    printf("---A---\n");
    for(i=0;i<An;i++)
    {
        for(j=0;j<An;j++)
        {
        printf("%d ",A[i][j]);

        }
        printf("\n");
    }
    printf("---B---\n");
    for(i=0;i<Bm;i++)
    {
        for(j=0;j<L;j++)
        {
        printf("%d ",B[i][j]);

        }
        printf("\n");
    }
    int C[An][L];
    int sum=0;
    //printf("---C---\n");
    for (i=0;i<An;i++)
    {
        for(j=0;j<L;j++)
        {
            C[i][j]= ((A[i][0]*B[0][j])+(A[i][1]*B[1][j])+(A[i][2]*B[2][j]));
            //printf("C[%d][%d] = %d\n",i,j,C[i][j]);
        }
        //printf("\n");
    }

     printf("---C---\n");
        for(i=0;i<Bm;i++)
        {
            for(j=0;j<L;j++)
            {
                printf("%d ",C[i][j]);

            }
            printf("\n");
    }

    return 0;
}
