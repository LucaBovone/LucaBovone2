/*
 ============================================================================
 Name        : Ejercicio2-1.c
 Author      : Luca Bovone
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int i;
	int numero;
	int sumaNumeros=0;
	int promedio;


	for(i=0;i<5;i++){
	printf("Ingrese numero %d \n",i+1);
	scanf("%d",&numero);

	sumaNumeros+=numero;

	}
	promedio=(sumaNumeros/5);

	printf("El promedio de la suma de los 5 numeros es: %d",promedio);


return EXIT_SUCCESS;
}
