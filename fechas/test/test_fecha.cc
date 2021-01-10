/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * Asignatura: Informática Básica
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief gtest para la clase Fecha
 */

#include <gtest/gtest.h>
#include <string>
#include "fecha.h"


TEST(TestFecha, es_bisiesto) {
  Fecha fecha{1, 2, 2020};
  EXPECT_TRUE(fecha.VerBisiesto());
}

TEST(TestFecha, no_es_bisiesto) {
  Fecha fecha{1, 2, 2021};
  EXPECT_FALSE(fecha.VerBisiesto());
}

TEST(TestFecha, asigna_fecha_string) {
  std::string cadena{"10/12/2020"};
  Fecha fecha;
  fecha = cadena;
  EXPECT_EQ(fecha.VerFecha(), "10/12/2020");
}

TEST(TestFecha, comaracion_menor) {
  Fecha fecha1{5, 4, 2000};
  Fecha fecha2{20, 10, 2010};
  EXPECT_TRUE(fecha1 < fecha2);
  EXPECT_FALSE(fecha2 < fecha1);

}

TEST(TestFecha, comaracion_mayor) {
  Fecha fecha1{5, 4, 2000};
  Fecha fecha2{20, 10, 2010};
  EXPECT_FALSE(fecha1 > fecha2);
  EXPECT_TRUE(fecha2 > fecha1);
}

TEST(TestFecha, comaracion_igual) {
  Fecha fecha1{5, 4, 2000};
  Fecha fecha2{20, 10, 2010};
  EXPECT_FALSE(fecha1 == fecha2);
  EXPECT_FALSE(fecha2 == fecha1);
  EXPECT_TRUE(fecha1 == fecha1);
  EXPECT_TRUE(fecha2 == fecha2);
}