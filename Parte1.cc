#include <iostream>
#include <stdio.h>

int main()
{
    int numero;

    printf( "\n   Introduzca un nucmero entero: ", 163 );
    scanf( "%d", &numero );

    if ( numero % 2 == 0 )
        printf( "\n   EL NUMERO INTRODUCIDO ES PAR" );
    else
        printf( "\n   EL NUMERO INTRODUCIDO ES IMPAR" );


}