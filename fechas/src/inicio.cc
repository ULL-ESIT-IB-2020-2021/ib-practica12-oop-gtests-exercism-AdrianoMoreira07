/**
* Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática (1º)
* Asignatura: Informática Básica
* 
* @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
* @brief Da una respuesta según los parámetros de entrada argv[]
*/

#include "inicio.h"
#include <string>
#include <iostream>
#include <cstdlib>

void Inicio(int argc, char* argv[]) {
  const std::string kAyuda {
    "Este programa ordena las fechas de forma ascendente\n"
    "que se encuentren en un fichero de texto y las escribe\n"
    "en un segundo fichero de texto\n"
    "Modo de enmpleo: ./fechas fichero_entrada.txt fichero_salida.txt\n"
    "Parámetros: \n"
    "    fichero_entrada.txt -> Fichero con fechas en formato dd/mm/aaaa\n"
    "    ichero_salida.txt -> Fichero en el que se escribirá\n"
    "Para ayuda: ./fechas --help"
  };
  const std::string kMalaEntrada {
    "./fechas - Gestión de fechas\n"
    "Modo de uso: ./fechas fichero_entrada.txt fichero_salida.txt\n"
    "Pruebe ./fechas --help para más información"
  };
  if (argc != 3) {
    if (argc == 2) {
      std::string entrada{argv[1]};
      if (entrada == "--help") {
        std::cout << kAyuda << std::endl;
        exit(EXIT_SUCCESS);
      }
    }
    std::cout << kMalaEntrada << std::endl;
    exit(EXIT_SUCCESS);
  }
}