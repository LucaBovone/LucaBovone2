/*
 Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas (no más de 100), de cada persona debemos obtener los siguientes datos:
 número de cliente,
 estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad( solo mayores de edad, más de 17),
 temperatura corporal (validar por favor)
 y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: El precio por pasajero es de $600.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas con estado  civil"viudo" de más de 60 años.
 b) el número de cliente y edad de la mujer soltera más joven.
 c) cuánto sale el viaje total sin descuento.
 d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroCliente;
	char estadoCivil;
	int edad;
	int tempCorp;
	char genero;
	int i;
	char condicionSalida;
	int contadorViudos60;
	int nroMujerMasJoven;
	int edadMujerMasJoven;
	int flag;
	float costoViajeSinDescuento;
	int condicionDescuento;
	int mayores60;
	float costoViajeConDescuento;

	flag = 0;
	condicionSalida = 'j';
	contadorViudos60 = 0;
	i = 0;
	mayores60 = 0;

	do {

		printf("Ingrese numero del cliente numero ° %d \n", i + 1);
		scanf("%d", &numeroCliente);
		fflush(stdin);
		do {
			printf(
					"Ingrese estado Civil. ('s' para soltero 'c' para casado o 'v' viudo) \n");
			scanf("%c", &estadoCivil);
			fflush(stdin);
		} while (!(estadoCivil == 's' || estadoCivil == 'c'
				|| estadoCivil == 'v'));

		do {
			printf("Ingrese edad (Mayor 17 anios) \n");
			scanf("%d", &edad);
		} while (!(edad > 17));

		do {
			printf("Ingrese temperatura corporal  \n");
			scanf("%d", &tempCorp);
		} while (!(tempCorp > 33 && tempCorp < 40));
		fflush(stdin);
		do {
			printf(
					"'f' para femenino, 'm' para masculino, 'o' para no binario) \n");
			scanf("%c", &genero);
			fflush(stdin);
		} while (!(genero == 'f' || genero == 'm' || genero == 'o'));

		printf(
				"desea cargar otro pasajero? ('s' Para seguir / 'n' Para frenar)  \n");
		scanf("%c", &condicionSalida);

		if (edad > 60) {
			mayores60++;
			if (estadoCivil == 'v') {
				contadorViudos60++;
			}
		}

		if (genero == 'f' && (flag == 0 || edad < edadMujerMasJoven)) {

			nroMujerMasJoven = numeroCliente;
			edadMujerMasJoven = edad;

			flag = 1;
		}
		i++;
	} while (!(condicionSalida == 'n' || !(i < 100)));

	costoViajeSinDescuento = (i * 600);

	condicionDescuento = i / 2;

	costoViajeConDescuento = costoViajeSinDescuento * 0.75;

	printf("La cantidad de viudos mayor a 60 anios es %d \n", contadorViudos60);

	printf(
			"El numero de cliente de la mujer mas joven es %d y su edad es %d \n",
			nroMujerMasJoven, edadMujerMasJoven);

	printf("El costo del viaje sin descuento es %f \n", costoViajeSinDescuento);

	if (mayores60 > condicionDescuento) {
		printf(
				"El costo del viaje posee un 25 porciento de descuento \ndebido a que mas del 50 porciento es mayor a 60  el precio del viaje es %f \n",
				costoViajeConDescuento);
	}

}
