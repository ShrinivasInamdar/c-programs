//Addition of 2 Matrices
#include <stdio.h>
void main()
{
    int a[100][100], b[100][100], sum[100][100],rows, columns, i, j;
    printf("Enter the number of rows and columns");
    scanf("%d%d", &rows, &columns);
    printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter elements of 2nd matrix:");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
            scanf("%d", &b[i][j]);
    }
    printf("\nSum of two matrices:");

    for (i = 0; i < rows;i++)
    {
        for (j = 0; j < columns;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
