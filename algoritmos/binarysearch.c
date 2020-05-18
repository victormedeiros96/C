#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "funcoes_auxiliares.h"
void bubbleSort(int *array,int n){
	int aux;
	for (int i=0;i<n-1;i++){
		for (int j=1;j<n-i;j++){
			if (*(array+j-1)>*(array+j)){
				aux = *(array+j-1);
				*(array+j-1) = *(array+j);
				*(array+j) = aux;
			}
		}
	}
}
void gerarVetor(int *vetor,int n){
	srand((unsigned) time(NULL));
	for (int i=0;i<n;i++){
		*(vetor+i) = rand()%1000-500;
	}
}
int buscaBinaria(int *vetor,int n, int valor){
	int e = 0,d = n-1;
	int meio = d/2;
	while (e<d-1){
		meio = (d+e)/2;
		printf("%d,%d,%d\n",e,meio,d);
		if (*(vetor+meio)==valor){
			return meio;
		}
		else if (valor==*(vetor+e)){
			return e;
		}
		else if (valor==*(vetor+d)){
			return d;
		}
		else if (*(vetor+meio)>valor){
			d = meio;
		}
		else if (*(vetor+meio)<valor){
			e = meio;
		}
	}
	return -1;
}
int main(int argc,char *argv[]){
	int array[100];
	gerarVetor(array,100);
	printIntArray(array,100);
	bubbleSort(array,100);
	printIntArray(array,100);
	int posicao = buscaBinaria(array,100,101);
	printf("%d",posicao);
}
