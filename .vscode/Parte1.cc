/*1.Realizar un programa en c++ obedeciendo a la siguiente argumentación:
El costo de la carrera del IUTA puede ser cancelado de la siguiente manera : 
una inicla del 20% del costo completo y el resto debe ser cancelado 
en cuotas mensuales durante 3 años, imprima un conjunto de instrucciones 
que permita calcular e imprimir la inicial y el monto de las cuotas mensuales 
dado el costo de la carrera*/
#include <iostream>
using namespace std;
int costo, inicial,monto;
float cuota;
int main(){
       cout<<"\nIngrese el costo de la carrera: " << endl; 
       cin >> costo;
       inicial = (costo)%20*100;
       cout<<"\nEl costo inicial de la carrera es: "; 
       cout<< inicial;
       cuota = (costo-inicial)/36;
       cout<<"\nLa cuota mensual a lo largo de los 36 meses de duracion de la carrera seria: ";
       cout<< cuota;
       
}