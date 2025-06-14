#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    char periodo[11];
    char nivel_general_aperturas[41];
    double indice_icc;
    char Clasificador[14];
    double var_mensual, var_interanual;
} Fila;

int main()
{
    printf("Hello world!\n");
    return 0;
}

/**
    Pasar NULL a filaPrev significa que es el primer mes y no deber�a ser calculado.
    La funci�n que llame deber� comprobar si es una fecha v�lida.
*/
void calcularVarMensual(Fila* filaAct, Fila* filaPrev) {
    if (filaAnt == NULL) return;

    double porcentaje = calcularVarPorc(filaAct->var_mensual, filaPrev->var_mensual);

    filaAct->var_mensual = floor(porcentaje * 100) / 100;
}

/**
    Pasar NULL a filaPrev significa que no paso un a�o y no deber�a ser calculado.
    La funci�n que llame deber� comprobar si es una fecha v�lida.
*/
void calcularVarInteranual(Fila* filaAct, Fila* filaPrev) {
    if (filaAnt == NULL) return;

    double porcentaje = calcularVarPorc(filaAct->var_mensual, filaPrev->var_mensual);

    filaAct->var_mensual = floor(porcentaje * 100) / 100;
}

double calcularVarPorc(double indActual, double indPrevio) {
    return (indActual/ indPrevio - 1) * 100;
}
