/*
 ============================================================================
 Name        : NumeoDelMedio2.c
 Author      : Luca Bovone
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero1;
	int numero2;
	int numero3;

	setbuf(stdout,NULL);

	printf("Ingrese el numero 1\n");
	scanf ("%d",&numero1);

	printf("Ingrese el numero 2\n");
	scanf ("%d",&numero2);

	printf("Ingrese el numero 3\n");
	scanf ("%d",&numero3);

	if(numero1>numero2 && numero1>numero3){
		printf("El numero mayor es el primero: %d\n",numero1);
	}else if(numero2>numero3){
		printf("El numero mayor es el segundo: %d\n",numero2);
	}else {
		printf("El numero mayor es el tercero: %d\n",numero3);
		}

	if(numero1>numero2 && numero1>numero3){
		if(numero2<numero3){
		printf("El numero del medio es: %d",numero3);

		}else if(numero3<numero2){
			printf("El numero del medio es: %d",numero2);

		}else{
			printf("No hay numero del medio");
		}

	}else if(numero2>numero3 && numero2>numero1){

		if(numero1<numero3){
			printf("El numero del medio es: %d",numero3);

		}else if(numero3<numero1){
			printf("El numero del medio es: %d",numero1);

		}else{
			printf("No hay numero del medio");
	}

	}else if (numero3>numero1 && numero3>numero2){

		if(numero2<numero1){
			printf("El numero del medio es: %d",numero1);

		}else if(numero1<numero2){
			printf("El numero del medio es: %d",numero2);

		}else{
			printf("No hay numero del medio");
		}

	}else{
		printf("No hay numero del medio");
		}

	return EXIT_SUCCESS;
}
//	if(primerNro<segundoNro){
//min=primerNro;
//max=segundoNro;
//}else{
//min=segundoNro;
//max=primerNro;
//}
//
//if(primerNro==segundoNro || primerNro==tercerNro || segundoNro==tercerNro){
//sonIguales=0;
//}
//
//if(tercerNro>min && tercerNro<max){
//nroDelMedio=tercerNro;
//}else if(tercerNro<min){
//nroDelMedio=min;
//}else{
//nroDelMedio=max;
//}
//
//if(sonIguales==1){
//	printf("El numero del medio es el: %d", nroDelMedio);
//}else{
//printf("No hay numero del medio");
//}
//
//return EXIT_SUCCESS;
