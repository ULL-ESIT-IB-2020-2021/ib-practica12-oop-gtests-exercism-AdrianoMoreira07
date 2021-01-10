/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * Asignatura: Informática Básica
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief Clase Fecha
 */

#ifndef FECHA_H
#define FECHA_H

#include <string>
#include <iostream>

class Fecha {
 public:
  Fecha() {}
  Fecha(int dia_entrada, int mes_entrada, int anyo_entrada):
        dia_{dia_entrada}, mes_{mes_entrada}, anyo_{anyo_entrada} {
    Bisiesto();
  }
  
  void CambiarDia (const int& nuevo_dia) {dia_ = nuevo_dia;}
  void CambiarMes (const int& nuevo_mes) {mes_ = nuevo_mes;}
  void CambiarAnyo (const int& nuevo_anyo) {
    anyo_ = nuevo_anyo;
    Bisiesto();
  }

  const int& VerDia() const {return dia_;}
  const int& VerMes() const {return mes_;}
  const int& VerAnyo() const {return anyo_;}
  const bool& VerBisiesto() const {return bisiesto_;}

  std::string VerFecha() const {
    return (std::to_string(dia_)+"/"+std::to_string(mes_)+"/"+
            std::to_string(anyo_));
  }

  /*
   * Asigna a un objeto Fecha los valores de una
   * fecha en formato dd/mm/aaaa de tipo string
   * @param this Al que se le asigna la fecha
   * @param cadena De la que se extrae la fecha
   */
  void operator=(const std::string& cadena);

  bool operator<(const Fecha& otra_fecha) const;
  bool operator>(const Fecha& otra_fecha) const;
  bool operator==(const Fecha& otra_fecha) const;


 private:
  int dia_{1};
  int mes_{1};
  int anyo_{2000};
  bool bisiesto_{false};

  //Determina si una fecha es bisiesta
  void Bisiesto() {
    if (anyo_ % 4 == 0 && anyo_ % 100 != 0) {
      bisiesto_ = true;
    } else {
      bisiesto_ = false;
    }
  }
};

std::ostream& operator<<(std::ostream& out, const Fecha fecha);

#endif