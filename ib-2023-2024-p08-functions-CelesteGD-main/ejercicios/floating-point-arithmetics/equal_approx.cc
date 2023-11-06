/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief Main code, it takes two numbers and prints true if the numbers given in the input are approximately
 * equal or false if they aren't.
 */
#include "print-result.h"
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    return 345;
  }
  std::cout << "Everything is fine!. Let's continue with the normal execution..." << argc << std::endl;
  double first_num{0}, second_num{0}, epsilon = 1e-7;
  std::cin >> first_num >> second_num;
  PrintResult(first_num, second_num, epsilon);
  return 0;
 }
