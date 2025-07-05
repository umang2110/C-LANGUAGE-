#include <stdio.h>


void cubes(int *ptr, int row, int col)
{
    printf("\nCubes of all elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int val = *(ptr + i * col + j);  
            printf("%d ", val * val * val);
        }
        printf("\n");
    }
}

void main()
{
    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
        printf("a[%d][%d]= ",i,j);
            scanf("%d", &arr[i][j]);
            
        }
        
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    cubes(&arr[0][0], row, col);

    
}