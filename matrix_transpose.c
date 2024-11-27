#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter the no. of rows  : ");
    scanf("%d", &rows);

    printf("Enter the no. of columns  : ");
    scanf("%d", &cols);

    int matrix[rows][cols], transpose[cols][rows];
    printf("Enter the element of a matrix : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element at position [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Original matrix : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose matrix : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d \t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}