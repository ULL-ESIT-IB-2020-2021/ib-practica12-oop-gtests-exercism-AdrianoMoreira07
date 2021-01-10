/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * Asignatura: Informática Básica
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief Clase Fecha
 */

#include "fecha.h"
#include <string>

std::ostream& operator<<(std::ostream& out, const Fecha fecha) {
  out << fecha.VerFecha();
  return out;
}

void Fecha::operator=(const std::string& cadena) {
  if (cadena.find('/') == std::string::npos) {
    return;
  }
  dia_ = std::stoi(cadena.substr(0, cadena.find_first_of('/')));
  mes_ = std::stoi(cadena.substr
                  (cadena.find_first_of('/')+1, cadena.find_last_of('/')-1));
  anyo_ = std::stoi(cadena.substr(cadena.find_last_of('/')+1, cadena.length()));
}

bool Fecha::operator==(const Fecha& otra_fecha) const {
  if (dia_ == otra_fecha.dia_ && mes_ == otra_fecha.mes_ &&
      anyo_ == otra_fecha.anyo_) {
    return true;
  }
  return false;
}

bool Fecha::operator<(const Fecha& otra_fecha) const {
  if (anyo_ < otra_fecha.anyo_) {
    return true;
  } else if (anyo_ > otra_fecha.anyo_) {
    return false;
  }

  if (mes_ < otra_fecha.mes_) {
    return true;
  } else if (mes_ > otra_fecha.mes_) {
    return false;
  }

  if (dia_ < otra_fecha.dia_) {
    return true;
  }

  return false;
}

bool Fecha::operator>(const Fecha& otra_fecha) const {
  return !(*this < otra_fecha);
}