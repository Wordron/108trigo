/*
** EPITECH PROJECT, 2023
** elemantary_operations.c
** File description:
** elemantary_operations
*/
#include <stdlib.h>

long long factorial(int i)
{
    if (i == 1)
        return (1);
    return (factorial(i - 1) * i);
}

#include "include/108_trigo.h"

double **do_division(double **matrice, long long nb, int cols)
{
    double **mat = malloc(sizeof(double *) * cols);

    for (int k = 0; k != cols; k++)
        mat[k] = malloc(sizeof(double) * cols);
    if (nb == 0)
        exit(84);
    for (int i = 0; i != cols; i++) {
        for (int j = 0; j != cols; j++) {
            mat[i][j] = matrice[i][j] / nb;
            printf("power :\n");
            display(matrice, cols);
        }
    }
    return (mat);
}

double **do_product(double **matrice, int nb, int cols)
{
    double **mat = malloc(sizeof(double *) * cols);

    for (int k = 0; k != cols; k++)
        mat[k] = malloc(sizeof(double) * cols);
    for (int i = 0; i != cols; i++) {
        for (int j = 0; j != cols; j++) {
            mat[i][j] = matrice[i][j] * nb;
        }
    }
    return (mat);
}

double **do_addition(double **matrice1, double **matrice2, int cols)
{
    double **result = malloc(sizeof(double *) * cols);

    for (int k = 0; k != cols; k++)
        result[k] = malloc(sizeof(double) * cols);
    for (int i = 0; i != cols; i++) {
        for (int j = 0; j != cols; j++) {
            result[i][j] = (matrice1[i][j] + matrice2[i][j]);
        }
    }
    return (result);
}