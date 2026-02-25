#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int rows;
    int cols;
    double* data; 
} Matrix;

// --- Lifecycle Functions ---

// Creates a matrix of size rows x cols and initializes elements to 0
Matrix* create_matrix(int rows, int cols);

// Frees the memory allocated for the matrix data and the struct itself
void free_matrix(Matrix* m);

// --- Data Access Functions ---

// Sets the value at a specific row and column
void set_value(Matrix* m, int r, int c, double val);

// Returns the value at a specific row and column
double get_value(Matrix* m, int r, int c);

// Utility to print the matrix to the console (useful for debugging)
void print_matrix(Matrix* m);

#endif