#include <stdio.h>

typedef struct 
{
    int mat[100][100];
    int rows;
    int cols;
} Matrix;

Matrix inputMatrix(int rows, int cols);


void printMatrix(Matrix m);


Matrix add(Matrix m1, Matrix m2);


Matrix sub(Matrix m1, Matrix m2);


Matrix mul(Matrix m1, Matrix m2);


Matrix transpose(Matrix m);


int determinant(Matrix m);


Matrix cofactor(Matrix m);


Matrix inverse(Matrix m);