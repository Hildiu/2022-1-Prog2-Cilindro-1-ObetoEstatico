//
// Created by Profesor08 on 19/05/2022.
//

#ifndef MAYO19_CCILINDRO_H
#define MAYO19_CCILINDRO_H

#include <iostream>
#include <cmath>
using namespace std;

using tNumero = double;
const tNumero PI=3.1415;

class CCilindro
{
  private:
    tNumero radio;
    tNumero altura;
  public:
    CCilindro(){}  //-- constructor por defecto
    CCilindro(tNumero _radio, tNumero _altura): radio(_radio),altura(_altura) {}
    virtual ~CCilindro() { cout << "\nEstoy destruyendo el objeto....";}
    tNumero areaSC();
    tNumero areaLateral();
    tNumero areaTotal();
    tNumero volumen();
    //---metodos de acceso---
    void setRadio(tNumero _radio) { radio = _radio;}
    tNumero getRadio() { return  radio;}
    void setAltura(tNumero _altura) { altura = _altura;}
    tNumero getAltura(){ return altura;}
};


#endif //MAYO19_CCILINDRO_H
