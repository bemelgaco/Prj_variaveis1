/*
 ============================================================================
 Name        : Prj_variaveis.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void) {
	int idade = 17;
	const int MAX_NUM = 100;


	printf("minha variavel int comum = %d\n\n",idade);
	printf("minha variavel int constante = %d\n\n", MAX_NUM);
	printf("minha constante = %f\n", PI);

	//MAX_NUM= 99;

	return EXIT_SUCCESS;
}
