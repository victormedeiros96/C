#include <stdio.h>
#include "funcoes_auxiliares.h"
void sort(float *array,int n){
	float aux;
	int min;
	for (int i=0;i<n-1;i++){
		min = i;
		for (int j=i;j<n;j++){
			if (*(array+j)<*(array+min)){
				min = j;
			}
		}
		aux = *(array+i);
		*(array+i) = *(array+min);
		*(array+min) = aux;
	}
}
int main(int argc,char *argv[]){
	float array[9] = {5.0,9.0,3.0,1.0,2.0,8.0,4.0,7.0,6.0};
	printFloatArray(array,9);
	sort(array,9);
	printFloatArray(array,9);
}
