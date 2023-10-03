#include <stdio.h>

int main(void)
{
    int rows1, cols1;
    printf("For matrix A:\n");
    printf("Enter the rows: ");
    scanf("%d", &rows1);
    printf("Enter the columns: ");
    scanf("%d", &cols1);

    int A[rows1][cols1];

    printf("\nEnter data for matrix A:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    int rows2, cols2;
    printf("\nFor matrix B:\n");
    printf("Enter the rows: ");
    scanf("%d", &rows2);
    printf("Enter the columns: ");
    scanf("%d", &cols2);

    int B[rows2][cols2], C[rows1][cols2];

    printf("\nEnter data for matrix B:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    if (cols1 != rows2)
    {
        printf("Error: The number of columns in Matrix A must be equal to the number of rows in Matrix B for multiplication.\n");
        return 1;
    }

    printf("\nMatrix A:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Product of matrices A and B:\n");
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
