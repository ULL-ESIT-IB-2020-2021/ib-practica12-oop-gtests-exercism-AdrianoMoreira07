/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * Asignatura: Informática Básica
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief Algunas operaciones con complejos
 */

#include "complejo.h"

int main () {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  resultado = SumaCompleja(complejo1, complejo2);
  resultado.Imprimir();
  resultado = RestaCompleja(complejo1, complejo2);
  resultado.Imprimir();
  return 0;
}
