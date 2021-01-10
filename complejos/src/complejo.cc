/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * Asignatura: Informática Básica
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief Definiciones para complejo.h
 */

#include <iostream>
#include "complejo.h"

Complejo SumaCompleja(const Complejo& num1,const Complejo& num2) {
  return {num1.real_ + num2.real_, num1.imaginario_ + num2.imaginario_};
}

Complejo RestaCompleja(const Complejo& num1,const Complejo& num2) {
  return {num1.real_ - num2.real_, num1.imaginario_ - num2.imaginario_};
}

void Complejo::Imprimir() const {
  std::cout << real_ << " + " << imaginario_ << "i" << std::endl;
}


bool Complejo::operator==(const Complejo& otro_complejo) const {
  if (real_ == otro_complejo.real_ && 
      imaginario_ == otro_complejo.imaginario_) {
    return true;
  }
  return false;
}
