// Lab Experiment2_2: 2D Dynamic Matrix with Recursion Write a 
// C program to dynamically allocate memory for an m × n matrix using malloc(). 
// Read and display the matrix elements using normal loops. 
// Implement the following operations using recursive functions: 
// 1. Find the sum of all elements of the matrix.  
// 2. Find the maximum element in the matrix.  
// 3. Calculate the sum of elements of a specified row.
// Finally, release the dynamically allocated memory using free(). 

#include <stdio.h>
#include <stdlib.h>

// Recursive function to find sum of all elements
int matrixSum(int **matrix, int m, int n, int i, int j)
{
    if (i == m)
        return 0;

    if (j == n)
        return matrixSum(matrix, m, n, i + 1, 0);

    return matrix[i][j] + matrixSum(matrix, m, n, i, j + 1);
}

// Recursive function to find maximum element
int matrixMax(int **matrix, int m, int n, int i, int j)
{
    if (i == m)
        return matrix[0][0];

    if (j == n)
        return matrixMax(matrix, m, n, i + 1, 0);

    int max = matrixMax(matrix, m, n, i, j + 1);

    if (matrix[i][j] > max)
        return matrix[i][j];

    return max;
}

// Recursive function to find sum of a specified row
int rowSum(int **matrix, int row, int n, int j)
{
    if (j == n)
        return 0;

    return matrix[row][j] + rowSum(matrix, row, n, j + 1);
}

int main()
{
    int m, n;
    int **matrix;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    // Dynamically allocate memory for rows
    matrix = (int **)malloc(m * sizeof(int *));

    if (matrix == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Dynamically allocate memory for each row
    for (int i = 0; i < m; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));

        if (matrix[i] == NULL)
        {
            printf("Memory allocation failed!\n");

            // Free previously allocated rows
            for (int k = 0; k < i; k++)
                free(matrix[k]);

            free(matrix);
            return 1;
        }
    }

    // Input matrix elements
    printf("\nEnter matrix elements:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix
    printf("\nMatrix:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Find sum using recursion
    int sum = matrixSum(matrix, m, n, 0, 0);

    // Find maximum using recursion
    int maximum = matrixMax(matrix, m, n, 0, 0);

    // Get row number from user
    int row;

    printf("\nEnter row number to find its sum (1-%d): ", m);
    scanf("%d", &row);

    if (row < 1 || row > m)
    {
        printf("Invalid row number!\n");
    }
    else
    {
        int rSum = rowSum(matrix, row - 1, n, 0);

        printf("Sum of row %d = %d\n", row, rSum);
    }

    printf("Sum of all elements = %d\n", sum);
    printf("Maximum element = %d\n", maximum);

    // Free dynamically allocated memory
    for (int i = 0; i < m; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}