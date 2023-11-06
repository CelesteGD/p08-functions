/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief This function returns true if the numbers given in the input are approximately
 * equal or false if they aren't.
 */
#include <iostream>
bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7) {
    if (abs(number1 - number2) < epsilon) {
        return true;
    } else {
        return false;
    }
}
