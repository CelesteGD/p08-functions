/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Celeste González Díaz
 * @email alu0101648361@ull.edu.es
 * @date Nov 3 2023
 * @brief This function prints the area of a triangle if the sides are valid.
 */
#include "triangle-area.h"
#include <cmath>
void PrintResult(double side_1, double side_2, double side_3) {
    bool valid = IsAValidTriangle(side_1, side_2, side_3);
    if (valid == 1) {
        std::cout << "Not a valid Triangle" << std::endl;
    } else {
        double area = AreaTriangle(side_1, side_2, side_3);
        area = floor(area*100)/100; 
        //We use this to truncate instead of rounding to match expected result.
        std::cout << area << std::endl;
    }
}
