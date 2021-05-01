/*1.Realizar un programa en c++ obedeciendo a la siguiente argumentacion:
El costo de la carrera del IUTA puede ser cancelado de la siguiente manera : 
una inicla del 20% del costo completo y el resto debe ser cancelado 
en cuotas mensuales durante 3 años, imprima un conjunto de instrucciones 
que permita calcular e imprimir la inicial y el monto de las cuotas mensuales 
dado el costo de la carrera*/
#include <iostream>
using namespace std;
int costo,inicial;
float cuota;
int main(){
       cout<<"\nIngrese el costo de la carrera: "; 
       cin >> costo;
       inicial = costo * 0.20;       
       cuota = ((float)costo-inicial) / 36;
         cout<<"La cuota durante los 3 años es: " << cuota;
       cout<<"\nEl costo inicial de la carrera es: " <<inicial;
       cout << "\nLa cuota durante los 3 años es: " << cuota;
      return 0;
}