/**
 * Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática (1º)
 * Asignatura: Informática Básica
 * 
 * @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
 * @brief gtests para la class Complejo
 */

#include <gtest/gtest.h>
#include "complejo.h"


TEST(TestComplejo, suma_compleja) {
  Complejo num1{5, 6}, num2{2, 9};
  Complejo resultado{7, 15};

  Complejo num3{0}, num4{0};
  Complejo resultado2{0};

  Complejo num5{-5, -6}, num6{-2, -9};
  Complejo resultado3{-7, -15};

  EXPECT_EQ(SumaCompleja(num1, num2), resultado);
  EXPECT_EQ(SumaCompleja(num3, num4), resultado2);
  EXPECT_EQ(SumaCompleja(num5, num6), resultado3);
}

TEST(TestComplejo, resta_compleja) {
  Complejo num1{5, 6}, num2{2, 9};
  Complejo resultado{3, -3};

  Complejo num3{0}, num4{0};
  Complejo resultado2{0};

  Complejo num5{-5, -6}, num6{-2, -9};
  Complejo resultado3{-3, 3};

  EXPECT_EQ(RestaCompleja(num1, num2), resultado);
  EXPECT_EQ(RestaCompleja(num3, num4), resultado2);
  EXPECT_EQ(RestaCompleja(num5, num6), resultado3);
}