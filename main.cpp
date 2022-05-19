//----------------------------------------
// Dato de Entrada: radio, altura (double)
// Dato de Salida: ALateral, ATotal, Volumen,
//               : ASupCilindrica
//----------------------------------------
#include "CCilindro.h"

int main()
{ tNumero r,h;

   cout << "Radio : ";
   cin >> r;
   cout << "Altura: ";
   cin >> h;
   CCilindro obj(r,h);
   cout << "Area de la superficie cilindrica: " << obj.areaSC() << "\n";
   cout << "Area lateral                    : " << obj.areaLateral() << "\n";
   cout << "Area total                      : " << obj.areaTotal() << "\n";
   cout << "Volumen                         : " << obj.volumen() << "\n";
   //---- ahora modificaremos el valor del radio de tal manera
   //---- que el radio sera ahora el doble el radio que el usuario ingreso como dato
   //---- y repetiremos el calculo
   cout <<"\nModificamos el valor del radio e imprimimos los valores nuevamente\n";
    obj.setRadio(obj.getRadio()*2);
    cout << "Area de la superficie cilindrica: " << obj.areaSC() << "\n";
    cout << "Area lateral                    : " << obj.areaLateral() << "\n";
    cout << "Area total                      : " << obj.areaTotal() << "\n";
    cout << "Volumen                         : " << obj.volumen() << "\n";

   //--- creamos otro objeto
   CCilindro obj2;  //--- se invoca al constructor por defecto

    cout << "Radio : ";
    cin >> r;
    cout << "Altura: ";
    cin >> h;
    obj2.setRadio(r);
    obj2.setAltura(h);
    cout << "Segundo objeto \n";
    cout << "Area de la superficie cilindrica: " << obj2.areaSC() << "\n";
    cout << "Area lateral                    : " << obj2.areaLateral() << "\n";
    cout << "Area total                      : " << obj2.areaTotal() << "\n";
    cout << "Volumen                         : " << obj2.volumen() << "\n";


   return 0;
}


