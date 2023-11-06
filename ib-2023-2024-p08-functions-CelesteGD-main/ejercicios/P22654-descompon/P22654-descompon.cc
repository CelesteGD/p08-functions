/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 06 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief dada una cantidad de segundos "n" calcula cuántas horas, minutos y segundos representa. 
 */

#include <iostream>
  void descompon (int numero, int& hora, int& minuto, int& segundo) {
    hora = numero/3600;
    minuto = (numero/60)%60;
    segundo = numero%60;
}

int main () {
  int numero;
  int hora;
  int minuto;
  int segundo;

  while (std::cin >> numero) {
	descompon(numero, hora, minuto, segundo);
	std::cout << hora << " " << minuto << " " << segundo << std::endl;
	return 0;
  }
}
