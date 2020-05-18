#include "funcoes_auxiliares.h"
#include <stdio.h>
void printIntArray(int *array,int n){
	printf("[");
	for (int i=0;i<n;i++){
		printf("%d,",*(array+i));
	}
	printf("\b]\n");
}
void printFloatArray(float *array,int n){
	printf("[");
	for (int i=0;i<n;i++){
		printf("%g,",*(array+i));
	}
	printf("\b]\n");
}
