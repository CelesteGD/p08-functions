/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz 
 * @email alu0101648361@ull.edu.es
 * @date 06 Nov 2023
 * @brief Main program, it prints its purpose, checks if the number of passed
 * parameters is correct and then takes three numbers and calculates the
 * result of a given function substituting those numbers in three variables.
 */

#include "program-purpose.h"
#include "check-parameters.h"
#include "three-variables.h"

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Everything is fine!. Let's continue with the normal execution..." << argc << std::endl;
  double number_1{0}, number_2{0}, number_3{0};
  std::cin >> number_1 >> number_2 >> number_3;
  double resultado = CalculateFunction(number_1, number_2, number_3);
  std::cout << resultado << std::endl;
  return 0;
}

