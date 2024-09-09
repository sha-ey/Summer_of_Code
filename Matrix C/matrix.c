#include"matrix.h"

Matrix inputMatrix(int rows, int cols) 
{
    Matrix m;
    m.rows = rows;
    m.cols = cols;
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &m.mat[i][j]);
        }
    }
    return m;
}

void printMatrix(Matrix m) 
{
    if (m.rows == 0 || m.cols == 0) 
    {
        printf("Operation failed. No matrix to display.\n");
        return;
    }
    for (int i = 0; i < m.rows; i++) 
    {
        for (int j = 0; j < m.cols; j++) 
        {
            printf("%d ",m.mat[i][j]);
        }
        printf("\n");
    }
}


Matrix add(Matrix m1, Matrix m2) 
{
    Matrix result;
    result.rows=0;
    result.cols=0;
    if (m1.rows != m2.rows || m1.cols != m2.cols) 
    {
        printf("Error: Matrices must have the same dimensions for addition.\n");
        return result;
    }
    result.rows = m1.rows;
    result.cols = m1.cols;
    for (int i = 0; i < m1.rows; i++) 
    {
        for (int j = 0; j < m1.cols; j++) 
        {
            result.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
        }
    }
    return result;
}

Matrix sub(Matrix m1, Matrix m2) 
{
    Matrix result;
    result.rows=0;
    result.cols=0;
    if (m1.rows != m2.rows || m1.cols != m2.cols) 
    {
        printf("Error: Matrices must have the same dimensions for subtraction.\n");
        return result;
    }
    result.rows = m1.rows;
    result.cols = m1.cols;
    for (int i = 0; i < m1.rows; i++) 
    {
        for (int j = 0; j < m1.cols; j++) 
        {
            result.mat[i][j] = m1.mat[i][j] - m2.mat[i][j];
        }
    }
    return result;
}

Matrix mul(Matrix m1, Matrix m2) 
{
    Matrix result;
    result.rows=0;
    result.cols=0;
    if (m1.cols != m2.rows) 
    {
        printf("Error: Number of columns in the first matrix must equal the number of rows in the second for multiplication.\n");
        return result;
    }
    result.rows = m1.rows;
    result.cols = m2.cols;
    for (int i = 0; i < result.rows; i++) 
    {
        for (int j = 0; j < result.cols; j++) 
        {
            result.mat[i][j] = 0;
            for (int k = 0; k < m1.cols; k++) 
            {
                result.mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
            }
        }
    }
    return result;
}

Matrix transpose(Matrix m) 
{
    Matrix result;
    result.rows = m.cols;
    result.cols = m.rows;

    for (int i = 0; i < m.rows; i++) 
    {
        for (int j = 0; j < m.cols; j++) 
        {
            result.mat[j][i] = m.mat[i][j];
        }
    }
    return result;
}

int determinant(Matrix m)
{
    if (m.rows != m.cols)
    {
        printf("Error: Determinant is only defined for square matrices.\n");
        return 0;
    }

    int n = m.rows;

    if (n == 1) 
    {
        return m.mat[0][0];
    }

    
    if (n == 2) 
    {
        return (m.mat[0][0] * m.mat[1][1]) - (m.mat[0][1] * m.mat[1][0]);
    }

    
    int det = 0;
    Matrix submatrix;
    submatrix.rows = n - 1;
    submatrix.cols = n - 1;

    for (int x = 0; x < n; x++) 
    {
        int subi = 0;
        for (int i = 1; i < n; i++)
        {
            int subj = 0;
            for (int j = 0; j < n; j++) 
            {
                if (j == x) {
                    continue;
                }
                submatrix.mat[subi][subj] = m.mat[i][j];
                subj++;
            }
            subi++;
        }

        
        int sign = (x % 2 == 0) ? 1 : -1;
        det += sign * m.mat[0][x] * determinant(submatrix);
    }

    return det;
}


Matrix cofactor(Matrix m) 
{
    Matrix result;
    result.rows = m.rows;
    result.cols = m.cols;

    Matrix submatrix;
    submatrix.rows = m.rows - 1;
    submatrix.cols = m.cols - 1;

    for (int i = 0; i < m.rows; i++) 
    {
        for (int j = 0; j < m.cols; j++) 
        {
            int subi = 0;
            for (int x = 0; x < m.rows; x++) 
            {
                if (x == i) continue;
                int subj = 0;
                for (int y = 0; y < m.cols; y++) 
                {
                    if (y == j) continue;
                    submatrix.mat[subi][subj] = m.mat[x][y];
                    subj++;
                }
                subi++;
            }
            int sign = ((i + j) % 2 == 0) ? 1 : -1;
            result.mat[i][j] = sign * determinant(submatrix);
        }
    }
    return result;
}

Matrix inverse(Matrix m)
{
    Matrix result;
    result.rows=0;
    result.cols=0;
    
    if (m.rows != m.cols)
    {
        printf("Error: Inverse is only calculated for square matrices.\n");
        return result;
    }
    int det = determinant(m);
    if (det == 0) 
    {
        printf("Error: The matrix is singular and does not have an inverse.\n");
        return result;
    }

    Matrix cofactorMatrix = cofactor(m);
    Matrix adjugate = transpose(cofactorMatrix);

    result.rows = adjugate.rows;
    result.cols = adjugate.cols;

    for (int i = 0; i < result.rows; i++) 
    {
        for (int j = 0; j < result.cols; j++) 
        {
            result.mat[i][j] = adjugate.mat[i][j] / (float)det;
        }
    }

    return result;
}

