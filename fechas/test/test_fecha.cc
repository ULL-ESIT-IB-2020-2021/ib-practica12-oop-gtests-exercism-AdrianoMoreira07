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

TEST(TestFecha, comaracion_mayor) {
  Fecha fecha1{20, 10, 2010};
  Fecha fecha2{5, 4, 2000};
  EXPECT_GT(fecha1, fecha2);
  fecha1.CambiarAnyo(fecha2.VerAnyo());
  EXPECT_GT(fecha1, fecha2);
  fecha1.CambiarMes(fecha2.VerMes());
  EXPECT_GT(fecha1, fecha2);
}

TEST(TestFecha, comaracion_menor) {
  Fecha fecha1{5, 4, 2000};
  Fecha fecha2{20, 10, 2010};
  EXPECT_LT(fecha1, fecha2);
  fecha1.CambiarAnyo(fecha2.VerAnyo());
  EXPECT_LT(fecha1, fecha2);
  fecha1.CambiarMes(fecha2.VerMes());
  EXPECT_LT(fecha1, fecha2);
}

TEST(TestFecha, comaracion_igual) {
  Fecha fecha1{5, 4, 2000};
  Fecha fecha2{5, 4, 2000};
  EXPECT_EQ(fecha1, fecha2);
  EXPECT_EQ(fecha1, fecha1);
  EXPECT_EQ(fecha2, fecha2);
}