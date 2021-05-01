//2. Escriba un programa que permita determina si el número es par e impar

#include <iostream>
 
using namespace std;
 
 int numero;
int main()
{

    cout << "\nDigite un numero entero\n";
    cin>>numero;
            if (numero % 2 == 0)
            cout << "\n El NUMERO ES PAR: ";

            else
           cout << "\nEL NUMERO ES IMPAR ";
    
      cout << endl;
      
        return 0;
}