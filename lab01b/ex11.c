#include <stdio.h>
#define MATRIX_ORDER 3

void PrintMatrix(int matrix[MATRIX_ORDER][MATRIX_ORDER])
{
    int row;
    for (row = 0; row < MATRIX_ORDER; row++)
    {
        for (int col = 0; col < MATRIX_ORDER; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[MATRIX_ORDER][MATRIX_ORDER];

    printf("Preencha os quadrantes da matriz (ORDER=3): \n\n");

    for (int row = 0; row < MATRIX_ORDER; row++)
        {
            for (int col = 0; col < MATRIX_ORDER; col++)
            {
                printf("[%i,%i] = ", row, col);
                scanf("%i", &matrix[row][col]);
            }
            printf("\n");
        }
    PrintMatrix(matrix);

    printf("\nL2 = L1 + L2\n\n");
    int result_row_index = 1;
    
    for (int col = 0; col < MATRIX_ORDER; col++)
    {
        matrix[result_row_index][col] = matrix[0][col] + matrix[1][col];
    }
    PrintMatrix(matrix);

    printf("\nL2 = L1 * L2\n\n");
    int result_row_index_m = 1;
    
    for (int col = 0; col < MATRIX_ORDER; col++)
    {
        matrix[result_row_index_m][col] = matrix[0][col] * matrix[1][col];
    }
    PrintMatrix(matrix);

    return 0;
}