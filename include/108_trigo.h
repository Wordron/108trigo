/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** 108_trigo
*/

#ifndef _TRIGO_H_
    #define _TRIGO_H_

    double **do_addition(double **matrice1, double **matrice2, int cols);
    double **do_division(double **matrice, long long nb, int cols);
    long long factorial(int i);

    int **matrix_product_int(int **matrix_1, int **matrix_2, int size) ;
    int **matrix_power_int(int **matrix, int size, int power);
    double **matrix_product_double(double **matrix_1, double **matrix_2, int size);
    double **matrix_power_double(double **matrix, int size, int power);
    double **do_product(double **matrice, int nb, int cols);

    double **get_mat_identity(int cols);

    double **do_sinh(double **matrix, int size);
    double **do_sin(double **matrix, int size);
    double **do_cosh(double **matrix, int size);
    double **do_cos(double **matrix, int size);
    double **do_exp(double **matrix, int size);

    int *get_array(char **av, int ac);
    double **get_identity_message(int *array, int nb_numbers);
    void display(double **result, int cols);

#endif /* !_TRIGO_H_ */
