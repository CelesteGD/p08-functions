/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief Main code, it takes three sides and, if they make a valid triangle,
 * it prints its area.
 */
#include "print-result.h"
#include <iostream>
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Everything is fine!. Let's continue with the normal execution..." << argc << std::endl;
  double lado_1{0}, lado_2{0}, lado_3{0};
  std::cin >> lado_1 >> lado_2 >> lado_3;
  PrintResult(lado_1, lado_2, lado_3);
  return 0;
 }

