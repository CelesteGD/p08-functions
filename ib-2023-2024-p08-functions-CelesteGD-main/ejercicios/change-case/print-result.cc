/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief This function prints all the elements of the vector
 * generated in the function declared in the header file "change-case.h".
 */
#include "change-case.h"
void PrintResult(std::string letters) { 
    std::vector<char> result = ChangeCase(letters);
    for (char element:result) {
        std::cout << element;
    }
}
