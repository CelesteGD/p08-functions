/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 06 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief Escribe una función que diga si un "n" natural es perfecto. Un número natural se llama perfecto si es igual a la suma de todos sus divisores excepto él mismo. 
 */

#include <iostream>
#include <cmath>

bool is_perfect(int numero) {
  if (numero == 0 || numero == 1) return false;
  int sum = 1;
  for (int i = 2; i < sqrt(numero); ++i) {
      if (numero % i == 0) sum += i + numero / i;
}
  return sum == numero ? "true" : "false";
}

int main() {
  int numero;
  std::cin >> numero;
  bool resultado = is_perfect(numero);
  if (resultado == 0) {
	std::cout << "false" << std::endl;
  } else {
	  std::cout << "true" << std::endl;
  }
  return 0;
}
