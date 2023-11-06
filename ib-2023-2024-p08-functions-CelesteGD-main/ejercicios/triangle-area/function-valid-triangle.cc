/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief This function checks if the given sides of a triangle are valid,
 * each side must be smaller than the sum of the other two.
 */
#include <iostream>
bool IsAValidTriangle(double side_1, double side_2, double side_3) {
    double sum = side_1 + side_2 + side_3;
    if (side_1 > (sum-side_1) || side_2 > (sum-side_2) || side_3 > (sum-side_3)) {
        return true;
    } else {
        return false;
    }
}
