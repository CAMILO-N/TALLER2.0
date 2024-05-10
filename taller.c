#include <stdio.h>
////

float lectura_datos(float dato, char nombre[]);
float sum_ingresos(float a, float b, float c);
float calculo_saldo_contable(float a, float b);
float sum_gastos(float a, float b, float c, float d, float e);
void imprimir(float gastos, float ingresos, float saldo_contable, float saldo_contable_total);
float calculo_saldo_contable_total(float saldo_contable, float saldo_contable_total);
float lectura_datos2(float dato);
int main() {


    float mes, servicios_basicos, arriendo, sueldos, gastos_logistica, gastos_mercadeo, gastos, ingresos, ventas, saldo_mes_anterior, inversiones, saldo_contable, saldo_contable_total = 0;
    int i;

    
    mes = lectura_datos2(mes);

   for (i=1; i<= mes; i++) {

    servicios_basicos = lectura_datos(servicios_basicos, "Servicios Basicos");
    arriendo = lectura_datos(arriendo, "Arriendo");
    sueldos = lectura_datos(sueldos, "Sueldos");
    gastos_logistica = lectura_datos(gastos_logistica, "Gastos logistica");
    gastos_mercadeo = lectura_datos(gastos_mercadeo, "Gastos de mercadeo");

    gastos = sum_gastos(servicios_basicos, arriendo, sueldos, gastos_logistica, gastos_mercadeo);

    ventas = lectura_datos(ventas, "Ventas");
    saldo_mes_anterior = lectura_datos(saldo_mes_anterior, "Saldo mes anterior");
    inversiones = lectura_datos(inversiones, "Inversiones"); 

    ingresos = sum_ingresos(ventas, saldo_mes_anterior, inversiones);

    saldo_contable = calculo_saldo_contable(ingresos, gastos);
    saldo_contable_total = calculo_saldo_contable_total(saldo_contable, saldo_contable_total);

    imprimir(gastos, ingresos, saldo_contable, saldo_contable_total);

   

   } 

    return 0;
  
}

