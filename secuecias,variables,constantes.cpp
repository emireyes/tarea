#include <stdio.h>
#define PI 3.14159

int main (){
	
	float parcial1 = 9.5;
	float parcial2 = 8.5;
	float temp;

	printf ("parcial 1 % f\n ", parcial1);
	printf ("parcial 2 % f\n ", parcial2);
	
	
	temp = parcial1; 
	printf ("temp %f\n ", temp);
	parcial1 = parcial2;
	printf ("parcial 1 %f\n ", parcial1);
	parcial2 = temp;		
	printf ("parcial 2 %f\n ", parcial2);
	
	/*/
	int numero = 5;
	printf("valor %d \n", numero); // antes de la operacion 
	
	numero += 3;
	printf("valor %d \n", numero); // despues de la operacion 
	
	numero = numero + 1;
	printf("palabra %d \n", numero); // despues de la operacion 
	/*/
	

	return 0;
}

//* s variable, d decimal, f flotante, c un caracter//*
