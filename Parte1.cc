#include <iostream>
 
using namespace std;
 
 int numero;
int main()
{

    cout << "\nIntroduce un numero entero" << endl;
    cin>>numero;
            if (numero % 2 == 0)
            cout << "\n El NUMERO ES PAR: ";
            else
           cout << "\nEL NUMERO ES IMPAR ";
    
    cout << endl;
 
    return 0;
}