#include <stdlib.h>
#include "matrix.h"

/*
takes two whole numbers as input, finds enough space 
in memory for a grid of that size, and returns the 
address of where that grid starts
*/ 

Matrix* create_matrix(int rows, int cols) {
    Matrix* m = (Matrix*)malloc(sizeof(Matrix));

    m->rows = rows;
    m->cols = cols;

    m->data = (double*)malloc(rows * cols * sizeof(double));

    for (int i = 0; i < rows * cols; i++) {
        m->data[i] = 0.0;
    }

    return m;
};