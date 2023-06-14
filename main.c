/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/108_trigo.h"

void display(double **result, int cols)
{
    int j = 0;

    for (int i = 0; i < cols; i++) {
        for (j = 0; j < cols - 1; j++)
            printf("%.2f\t", result[i][j]);
        printf("%.2f", result[i][j]);
        printf("\n");
    }
}

static int check_if_square(int args)
{
    double square_root = sqrt(args);
    int temp = (int) square_root;

    if ((square_root - temp) == 0)
        return (0);
    return (1);
}

static int my_str_is_float(char const *str)
{
    int i = 1;

    while (str[i] != '\0') {
        if (str[i] <= '9' && str[i] >= '0' || str[i] == '.')
            i++;
        else
            return (0);
    }
    if (str[0] == '-')
        return (1);
    if (str[0] <= '9' && str[0] >= '0')
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    double cols = 0;
    int nb_numbers = 0;
    int *array;
    double **matrice;

    if (ac <= 2)
        return (84);
    if (check_if_square(ac - 2) == 1)
        return (84);
    if (strcmp(av[1], "EXP") != 0 && strcmp(av[1], "COS") != 0 && strcmp(av[1], "SIN") != 0 && strcmp(av[1], "COSH") != 0 && strcmp(av[1], "SINH") != 0)
        return (84);
    for (int i = 2; i != ac; i++) {
        cols++;
        if (my_str_is_float(av[i]) != 1)
            return (84);
    }
    nb_numbers = cols;
    cols = sqrt(cols);
    array = get_array(av, ac);
    matrice = get_identity_message(array, nb_numbers);
    if (strcmp(av[1], "EXP") == 0)
        do_exp(matrice, cols);
    else if (strcmp(av[1], "COS") == 0)
        do_cos(matrice, cols);
    else if (strcmp(av[1], "SIN") == 0)
        do_sin(matrice, cols);
    else if (strcmp(av[1], "COSH") == 0)
        do_cosh(matrice, cols);
    else if (strcmp(av[1], "SINH") == 0)
        do_sinh(matrice, cols);
    exit(0);
}