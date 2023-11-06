/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief This is a function that, given a minimum and a maximum number
 * generates a random number.
 */
#include <iostream>
#include <random>
int RandomInRange(int minimum, int maximum) {
    std::random_device random;
    std::mt19937 algorithm(random());
    std::uniform_int_distribution<int> distribution(minimum, maximum);
    return distribution(algorithm);
    // This generates and returns a random number within the specified range
}
