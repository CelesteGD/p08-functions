/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu010648361@ull.edu.es
 * @date Nov 3 2023
 * @brief This function calculates the area of a triangle using Heron's formula.
 */
#include <cmath>
double AreaTriangle(double side_1, double side_2, double side_3) {
    double semiperimeter = (side_1 + side_2 + side_3)/2;
    double inside_root = semiperimeter * (semiperimeter - side_1) * (semiperimeter - side_2) * (semiperimeter - side_3);
    double root = pow(inside_root, 0.5);
    return root;
}
