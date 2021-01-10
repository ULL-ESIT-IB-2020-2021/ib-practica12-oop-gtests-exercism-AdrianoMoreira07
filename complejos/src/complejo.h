/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * Asignatura: Informática Básica
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief Permite manejar números complejos
 * Funcionalidades:
 *  - Representar complejos (forma binómica)
 *  e imprimirlos en pantalla.
 *  - Sumar y restar complejos.
 */

#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo {
 public:
  Complejo(): real_{0}, imaginario_{0} {}
  Complejo(int real): real_{(double)real}, imaginario_{0} {}
  Complejo(double real, double imaginario): real_{real}, imaginario_{imaginario} {}

  /// Suma dos números complejos
  friend Complejo SumaCompleja(const Complejo& num1,const Complejo& num2);

  /// Resta dos números complejos
  friend Complejo RestaCompleja(const Complejo& num1,const Complejo& num2);

  /// Muestra por pantalla un número complejo
  void Imprimir() const;

  bool operator==(const Complejo& otro_complejo) const;
  
 private:
  double real_;
  double imaginario_;
};

#endif