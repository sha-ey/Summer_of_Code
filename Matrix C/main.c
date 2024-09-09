#include"matrix.h"

int main() 
{
    int rows1, cols1, rows2, cols2;

    
    printf("Enter rows and columns for the first matrix: \n");
    scanf("%d %d", &rows1, &cols1);

    
    printf("Enter rows and columns for the second matrix: \n");
    scanf("%d %d", &rows2, &cols2);

    
    Matrix mat1 = inputMatrix(rows1, cols1);
    Matrix mat2 = inputMatrix(rows2, cols2);

    
    Matrix resultAdd = add(mat1, mat2);
    printf("\nResult of addition:\n");
    printMatrix(resultAdd);

    
    Matrix resultSub = sub(mat1, mat2);
    printf("\nResult of subtraction:\n");
    printMatrix(resultSub);


    Matrix resultMul = mul(mat1, mat2);
    printf("\nResult of multiplication:\n");
    printMatrix(resultMul);

    Matrix resultTranspose = transpose(mat1);
    printf("\nTranspose of the first matrix:\n");
    printMatrix(resultTranspose);

    int det = determinant(mat1);
    printf("\nDeterminant of the first matrix: %d\n", det);

    Matrix inv = inverse(mat1);
    printf("\nInverse of the First matrix:\n");
    printMatrix(inv);

    return 0;
}