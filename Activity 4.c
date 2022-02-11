// Desing an algorithm to validate if a number is odd or even

#include <conio.h>
#include <stdio.h>

int main()
{
    int num;

    printf("Introduzca un numero sin decimales: ");
    scanf("%d", &num );

    if ( num % 2 == 0 )
        printf( "ES PAR" );
    else
        printf( "ES IMPAR" );

   

    return 0;
}
