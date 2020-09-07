/*
 ============================================================================
 Name        : EjerciciosRepaso2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	/*Sin funciones:
	para realizar un pedido, solicitar tres datos ,
	código de tipo int , validar entre 100 y 200
	cantidad de tipo entero(int), validar entre 1 y 20
	una talle de tipo char validad entre('S' , 'M' , 'L')

	a-mostrar el código y el talle  del que mas cantidad solicito
	b-el promedio del total  de cantidades de talle 'M' con decimales
	*/

	int codigoIngresado;
	int cantidadIngresada;
	char talleIngresado;
	int mayorCantidad;
	//int contadorS=0;
	int contadorM=0;
	//int contadorL=0;
	char talleMayorCantidad;
	int codigoMayorCantidad;
	int cantidadesTalleM=0;
	float promedioTalleM;

	for (int i=0; i<2;i++)
	{

		printf("Ingrese el codigo (entre 100 y 200):\n");
		scanf("%d", &codigoIngresado);
		while(codigoIngresado<100 || codigoIngresado>200)
		{
			printf("Error.Reingrese el codigo nuevamente(entre 100 y 200):\n");
			scanf("%d",&codigoIngresado);
		}

		printf("Ingrese la cantidad (entre 1 y 20 unidades):\n");
		scanf ("%d", &cantidadIngresada);
		while (cantidadIngresada<1 || cantidadIngresada>20)
		{
			printf("Error.Reingrese la cantidad (entre 1 y 20 unidades):\n");
			scanf ("%d", &cantidadIngresada);
		}

		printf ("Ingrese el talle ('S','M','L'):\n");
		__fpurge(stdin);
		scanf ("%c",&talleIngresado);

		while (talleIngresado !='S' && talleIngresado !='M' && talleIngresado != 'L')
		{
			printf ("Error. Reingrese el talle ('S' , 'M' , 'L'):\n");
			__fpurge(stdin);
			scanf ("%c",&talleIngresado);
		}

			if(	i==0 || cantidadIngresada>mayorCantidad)
				{
					mayorCantidad=cantidadIngresada;
					talleMayorCantidad=talleIngresado;
					codigoMayorCantidad=codigoIngresado;
				}

			if (talleIngresado=='M')
			{
				cantidadesTalleM+= cantidadIngresada;
				contadorM++;
			}
		/*switch (talleIngresado)
		{
		case 'S':
			contadorS++;
			break;
		case 'M':
			contadorM++;
			break;
		case 'L':
			contadorL++;
			break;
		}
		*/
	}

	promedioTalleM=(float)cantidadesTalleM/contadorM;

	printf ("El codigo del que mas cantidad ingreso es:  %d, y el talle del que mas cantidad ingreso es: %c\n",codigoMayorCantidad,talleMayorCantidad);
	printf ("El promedio de talle M es: %.2f\n",promedioTalleM);
	//-  - y el talle del que mas cantidad ingreso es:
	return (0);
}





