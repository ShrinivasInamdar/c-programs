//Transpose of Matrix
#include <stdio.h>
void main()
{
    int a[100][100], b[100][100], sum[100][100],rows,
    columns, i, j;
    printf("Enter the number of rows and columns");
    scanf("%d%d", &rows, &columns);
    printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns;j++)
            b[j][i] = a[i][j];
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
}
