#include <stdio.h>
#include "funcoes_auxiliares.h"
void sort(int *array,int n){
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
int main(int argc,char *argv[]){
	int array[9] = {5,9,3,1,2,8,4,7,6};
	printIntArray(array,9);
	sort(array,9);
	printIntArray(array,9);
}
