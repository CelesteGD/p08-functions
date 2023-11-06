/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 06 Nov 2023
 * @contact alu0101648361@ull.edu.es
 * @brief Escribe una función que, dada una fecha válida hecha con un día, un mes y un año, devuelva su día de la semana, es decir, "lunes", o "martes"...
 */

#include <iostream>
#include <string>
  bool is_valid_date(int day, int month, int year);
  std::string day_of_the_week(int day, int month, int year) {
  int century, fecha, a;
  std::string dia;
  month = month - 2;
  if (month <= 0) {
    month += 12;
    year -= 1;
  }
  century = year / 100;
  a = year % 100;
  fecha = ((2.6 * month) - 0.2);
  fecha = fecha + day + a + (a / 4) + (century / 4) - 2 * century;
  while (fecha < 0)
    fecha += 7;
  fecha = fecha % 7;
  switch (fecha) {
  case 0:
    dia = "Sunday";
    return dia;
  case 1:
    dia = "Monday";
    return dia;
  case 2:
    dia = "Tuesday";
    return dia;
  case 3:
    dia = "Wednesday";
    return dia;
  case 4:
    dia = "Thursday";
    return dia;
  case 5:
    dia = "Friday";
    return dia;
  case 6:
    dia = "Saturday";
    return dia;
  }
  return 0;
}

int main() {
  int dia, mes, anio;
  while (std::cin >> dia >> mes >> anio) {
    if(is_valid_date(dia, mes, anio)==1){
      std::cout << "day_of_the_week(" << dia << ", " << mes << ", " << anio << ") → "
         << day_of_the_week(dia, mes, anio) << std::endl;
  }else {continue;}
}
}

bool Bisiesto(int year) {
  if (year % 100 == 0) {
    if ((year / 100) % 4 == 0)
      return true;
    return false;
  } else {
    if (year % 4 == 0)
      return true;
    return false;
  }
}

bool is_valid_date(int day, int month, int year) {
  if (day < 1 || month < 1 || year < 1800 || year > 9999 || month > 12 ||
      day > 31) {
    return false;
  }
  if (!Bisiesto(year) && month == 2 && day > 28) {
    return false;
  }
  if (month == 2 && day > 29) {
    return false;
  }
  if ((month > 7 && month % 2 != 0 && day > 30) ||
      (month <= 7 && month % 2 == 0 && day > 30)) {
    return false;
  }
  return true;
}
