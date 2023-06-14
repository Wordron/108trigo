/*
** EPITECH PROJECT, 2023
** get_mat.c
** File description:
** get_mat
*/
#include <math.h>
#include <stdlib.h>

double **get_mat_identity(int cols)
{
    double **identity = malloc(sizeof(double *) * cols);

    for (int j = 0; j != cols; j++)
        identity[j] = malloc(sizeof(double) * cols);
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < cols; j++)
            identity[i][j] = 0;
    }
    for (int i = 0; i != cols; i++)
        identity[i][i] = 1;
    return (identity);
}

int *get_array(char **av, int ac)
{
    int *array = malloc(sizeof(int) * ac - 2);
    int index = 0;

    for (int i = 2; i != ac; i++) {
        array[index] = atoi(av[i]);
        index++;
    }
    return (array); 
}

double **get_identity_message(int *array, int nb_numbers)
{
    int rows = sqrt(nb_numbers);
    double **matrice = malloc(sizeof(double *) * rows);
    int index = 0;

    for (int i = 0; i != rows; i++)
        matrice[i] = malloc(sizeof(double) * rows);
    for (int j = 0; j != rows; j++) {
        for (int k = 0; k != rows; k++) {
            matrice[j][k] = array[index];
            index++;
        }
    }
    return (matrice);
}