/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief Main code, it takes a minimum and a maximum number and outputs a
 * random number in that range.
 */
#include "print-result.h"
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Everything is fine!. Let's continue with the normal execution..." << argc << std::endl;
  int numero_min{0}, numero_max{0};
  std::cin >> numero_min >> numero_max;
  PrintResult(numero_min, numero_max);
  return 0;
 }
