//
// Created by Profesor08 on 19/05/2022.
//
#include "CCilindro.h"

tNumero CCilindro::areaSC()
{
  return 2*PI*pow(radio,2);
}

tNumero CCilindro::areaLateral()
{
  return 2*PI*radio*altura;
}

tNumero CCilindro::areaTotal()
{
  return (areaSC() + areaLateral());
}

tNumero CCilindro::volumen()
{
  return PI*pow(radio,2)*altura;
}

