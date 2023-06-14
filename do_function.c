/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** do_function
*/
#include <math.h>
#include "include/108_trigo.h"

#include <stdio.h>

double **do_exp(double **matrix, int size)
{
    double **result = get_mat_identity(size);
    double **num = matrix;
    double **division_result = NULL;
    long long factorial_result = 0;

    for (int n = 1; n < 25; n++) {
        factorial_result = factorial(2 * n);
        printf("factorial :\n%llu\n", factorial_result);
        division_result = do_division(num, factorial_result, size);
        printf("division :\n"); display(division_result, size);
        result = do_addition(result, division_result, size);
        printf("result :\n"); display(result, size);
        num = matrix_product_double(num, matrix, size);
    }
    display(result, size);
    return (result);
}

double **do_cos(double **matrix, int size)
{
    double **result = get_mat_identity(size);
    double **squared = matrix_power_double(matrix, size, 2);
    double **num = matrix_power_double(matrix, size, 2);

    double **division_result = NULL;
    double **product_result = NULL;
    long long factorial_result = 0;

    for (int n = 1; n < 25; n++) {
        factorial_result = factorial(2 * n);
        division_result = do_division(num, factorial_result, size);
        product_result = do_product(division_result, pow(-1, n), size);
        result = do_addition(result, product_result, size);
        num = matrix_product_double(num, squared, size);
    }
    display(result, size);
    return (result);
}

double **do_cosh(double **matrix, int size)
{
    double **result = get_mat_identity(size);
    double **squared = matrix_power_double(matrix, size, 2);
    double **num = matrix_power_double(matrix, size, 2);

    double **division_result = NULL;
    long long factorial_result = 0;

    for (int n = 1; n < 25; n++) {
        factorial_result = factorial(2 * n);
        division_result = do_division(num, factorial_result, size);
        result = do_addition(result, division_result, size);
        num = matrix_product_double(num, squared, size);
    }
    display(result, size);
    return (result);
}

double **do_sin(double **matrix, int size)
{
    double **result = matrix;
    double **squared = matrix_power_double(matrix, size, 3);
    double **num = matrix_power_double(matrix, size, 3);

    double **division_result = NULL;
    double **product_result = NULL;
    long long factorial_result = 0;

    for (int n = 1; n < 25; n++) {
        factorial_result = factorial(2 * n + 1);
        division_result = do_division(num, factorial_result, size);
        product_result = do_product(division_result, pow(-1, n), size);
        result = do_addition(result, product_result, size);
        num = matrix_product_double(num, squared, size);
    }
    display(result, size);
    return (result);
}

double **do_sinh(double **matrix, int size)
{
    double **result = matrix;
    double **squared = matrix_power_double(matrix, size, 3);
    double **num = matrix_power_double(matrix, size, 3);

    double **division_result = NULL;
    long long factorial_result = 0;

    for (int n = 1; n < 25; n++) {
        factorial_result = factorial(2 * n + 1);
        division_result = do_division(num, factorial_result, size);
        result = do_addition(result, division_result, size);
        num = matrix_product_double(num, squared, size);
    }
    display(result, size);
    return (result);
}
