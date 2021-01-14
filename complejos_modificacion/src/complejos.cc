/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * Asignatura: Informática Básica
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief Algunas operaciones con complejos
 */

#include "complejo.h"
#include <iostream>

int main () {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;

  std::cout << "Num1: ";
  complejo1.Imprimir();
  std::cout << "Num2: ";
  complejo2.Imprimir();
  std::cout << std::endl;

  std::cout << "SUMA:" << std::endl;
  resultado = SumaCompleja(complejo1, complejo2);
  resultado.Imprimir();
  std::cout << std::endl;

  std::cout << "RESTA:" << std::endl;
  resultado = RestaCompleja(complejo1, complejo2);
  resultado.Imprimir();
  std::cout << std::endl;
  
  std::cout << "Num1 * 2:" << std::endl;
  resultado = complejo1 * 2;
  resultado.Imprimir();
  std::cout << std::endl;

  std::cout << "Num2 * 1.5:" << std::endl;
  resultado = complejo2 * 1.5;
  resultado.Imprimir();

  return 0;
}
