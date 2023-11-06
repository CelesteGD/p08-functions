/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief This is a function that changes the case of the characters of a given string,
 * it returns a vector with the characters with opposite case.
 */
#include <iostream>
#include <string>
#include <vector>
std::vector<char> ChangeCase(std::string text) {
    std::vector<char> changed_case{};
    for(char letter:text) {
        letter = static_cast<int> (letter);
        if (letter > 96 && letter < 123) {
            letter = letter - 32;
        } else if (letter > 64 && letter < 91) {
            letter = letter + 32;
        }   
        letter = static_cast<char> (letter);
        changed_case.emplace_back(letter);
    }
    return changed_case;
}
