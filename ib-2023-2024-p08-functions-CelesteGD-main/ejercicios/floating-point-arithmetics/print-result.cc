/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief This function prints true if the numbers given in the input are approximately
 * equal or false if they aren't.
 */
#include "equal_approx.h"
void PrintResult(const double number1, const double number2, const double epsilon = 1e-7) { 
    bool result = AreEqual(number1, number2, epsilon);
    if (result == 1) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
}
