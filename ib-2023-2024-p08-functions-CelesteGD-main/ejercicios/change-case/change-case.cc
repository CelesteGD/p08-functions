/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief Main code, it takes a string as an input and outputs the string with the 
 * lowercase characters that it contained changed to uppercase and the uppercase
 * characters changed to lowercase.
 */
#include "print-result.h"
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Everything is fine!. Let's continue with the normal execution..." << argc << std::endl;
  std::string texto{""};
  std::cin >> texto;
  PrintResult(texto);
  std::cout << std::endl;
  return 0;
 }
