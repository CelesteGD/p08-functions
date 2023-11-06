/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date 06 Nov 2023
 * @brief This is a function that takes three numbers and calculates the result
 * substituting the input in a given function.
 */
#include <iostream>
#include <cmath>
double CalculateFunction(double variable_x, double variable_y, double variable_t) {
   double inside_root = 2 * variable_t - 4;
   double root = pow(inside_root, 0.5);
   double denominator = variable_x * variable_x - variable_y * variable_y;
   double result = root/denominator;
   return result;
}
