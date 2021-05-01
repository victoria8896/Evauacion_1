#include <iostream>
#include <stdio.h>

int main()
{
    int numero;

    printf( "\n   Introduzca un n%cmero entero: ", 163 );
    scanf( "%d", &numero );

    if ( numero % 2 == 0 )
        printf( "\n   EL N%MERO INTRODUCIDO ES PAR" );
    else
        printf( "\n   EL N%MERO INTRODUCIDO ES IMPAR" );


}