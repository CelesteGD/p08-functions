/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief This function prints the random number generated with the function RandomInRange.
 */
#include "random_numbers.h"
void PrintResult(int number_1, int number_2) { 
    int random = RandomInRange(number_1, number_2);
    std::cout << random << std::endl;
}
