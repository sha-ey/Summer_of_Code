#include<bits/stdc++.h>

class Matrix
{
    vector<vector<int>>mat;
    int rows;
    int cols;

    Matrix()
    {
        int rows=10;
        int cols=10;
    }
    Matrix(int rows,int cols)
    {
        this->rows=rows;
        this->cols=cols;
    }

};
class MatrixOperations
{
    void printMatrix(Matrix m);
    
    Matrix add(Matrix m1, Matrix m2);


Matrix sub(Matrix m1, Matrix m2);


Matrix mul(Matrix m1, Matrix m2);


Matrix transpose(Matrix m);


int determinant(Matrix m);


Matrix cofactor(Matrix m);


Matrix inverse(Matrix m);