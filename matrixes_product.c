/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** matrixes_product
*/
#include <stdlib.h>
#include <stdio.h>

int **matrix_product_int(int **matrix_1, int **matrix_2, int size)
{
    int **matrix_result = malloc(sizeof(int *) * size);

    for (int i = 0; i < size; i++)
        matrix_result[i] = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix_result[i][j] = 0;
            for (int k = 0; k < size; k++)
                matrix_result[i][j] = matrix_result[i][j] + (matrix_1[i][k] * matrix_2[k][j]);
        }
    }
    return (matrix_result);
}

int **matrix_power_int(int **matrix, int size, int power)
{
    int **matrix_result = matrix_product_int(matrix, matrix, size);

    for (int i = 2; i < power; i++)
        matrix_result = matrix_product_int(matrix_result, matrix, size);
    return (matrix_result);
}

double **matrix_product_double(double **matrix_1, double **matrix_2, int size)
{
    double **matrix_result = malloc(sizeof(double *) * size);

    for (int i = 0; i < size; i++)
        matrix_result[i] = malloc(sizeof(double) * size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix_result[i][j] = 0;
            for (int k = 0; k < size; k++)
                matrix_result[i][j] = matrix_result[i][j] + (matrix_1[i][k] * matrix_2[k][j]);
        }
    }
    return (matrix_result);
}

double **matrix_power_double(double **matrix, int size, int power)
{
    if (power == 1)
        return (matrix);
    double **matrix_result = matrix_product_double(matrix, matrix, size);

    for (int i = 2; i < power; i++)
        matrix_result = matrix_product_double(matrix_result, matrix, size);
    return (matrix_result);
}
