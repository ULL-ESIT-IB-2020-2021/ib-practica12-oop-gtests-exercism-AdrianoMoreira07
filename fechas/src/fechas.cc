/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * Asignatura: Informática Básica
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief Escribe las N fechas posteriores a la introducida, saltándose
 *        un día entre cada fecha, en un archivo de texto
 */

#include "fecha.h"
#include "inicio.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>


int main (int argc, char* argv[]) {
  Inicio(argc, argv);
  
  std::string fichero_entrada_arg{argv[1]};
  std::string fichero_salida_arg{argv[2]};
  std::ifstream fichero_entrada{fichero_entrada_arg};
  std::ofstream fichero_salida{fichero_salida_arg};

  std::string entrada_actual{""};
  Fecha fecha_actual;
  
  std::vector<Fecha> lista_fechas;

  while (fichero_entrada) {
    getline(fichero_entrada, entrada_actual);
    if (entrada_actual.find('/') == std::string::npos) {
      continue;
    }
    fecha_actual = entrada_actual;
    lista_fechas.push_back(fecha_actual);
  }
  std::sort(lista_fechas.begin(), lista_fechas.end());

  for (auto i: lista_fechas) {
    fichero_salida << i << std::endl;
  }
  
  return 0;
}