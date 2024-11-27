#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10];
    int b[10][10];
    int arows, acol, brows, bcol, i, j, k;
    printf("Enter the no. of rows & columns for first matrix: ");
    scanf("%d %d", &arows, &acol);

    printf("Enter the no of elements of matrix a : \n");

    for (int i = 0; i < arows; i++)
    { // outer loop iterate only on rows
        for (int j = 0; j < acol; j++)
        { // inner loop iterate over the column for each row

            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the no. of rows & columns for second matrix: ");
    scanf("%d %d", &brows, &bcol);

    if (arows != bcol)
    {
        printf("Sorry! We cannot multiply the matrices a & b");
    }
    else
    {
        printf("Enter the of elements of matrix b : \n");
        
    }

    for (int i = 0; i < brows; i++)
    { // outer loop iterate only on rows
        for (int j = 0; j < bcol; j++)
        { // inner loop iterate over the column for each row

            scanf("%d", &b[i][j]);
        }
    }

    int product[10][10];
    int sum = 0;
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcol; j++)
        {
            for (k = 0; k < brows; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    printf("The resultant matrix is  : \n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcol; j++)
        {
            printf("%d \t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}