#include <stdio.h>
#include "funcion.h"


float lectura_datos2(float dato) {
    float valor;
    
    printf("Ingrese la cantidad de meses");
    scanf("%f", &valor);
    
    while (valor <= 0) {
        printf("Reeingresa los meses");
        scanf("%f", &valor);
    }

    return valor; 
}


float lectura_datos(float dato, char nombre[]) {
    float valor;
    
    printf("Ingrese el monto mensual para %s: ", nombre);
    scanf("%f", &valor);
    
    while (valor < 0) {
        printf("Reeingresa el %s: ", nombre);
        scanf("%f", &valor);
    }

    return valor; 
}

float sum_gastos(float a, float b, float c, float d, float e) {
    float total;
    total = a + b + c + d + e;
    
    return total;
}

float sum_ingresos(float a, float b, float c) {
    float total_ingresos;
    total_ingresos = a + b + c;

    return total_ingresos;
}

float calculo_saldo_contable(float a, float b) {
    float saldo_contable;
    saldo_contable = a - b;
    return saldo_contable;
}


float calculo_saldo_contable_total(float saldo_contable, float saldo_contable_total){
    saldo_contable_total += saldo_contable;

    return saldo_contable_total; 
}

void imprimir(float gastos, float ingresos, float saldo_contable, float saldo_contable_total){
    printf("Los gastos son: %.2f\n", gastos);
    printf("Los ingresos son: %.2f\n", ingresos);
    printf("El saldo es: %.2f\n", saldo_contable);
 
}