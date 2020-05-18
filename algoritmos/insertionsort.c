#include <stdio.h>
#include "funcoes_auxiliares.h"
void sort(int *array,int n){
	int aux;
	int temp;
	for (int i=1;i<n;i++){
		temp = i;
		while( ( *(array+temp-1) > *(array+temp) ) && (temp>=0) ){
			aux = *(array+temp);
			*(array+temp) = *(array+temp-1);
			*(array+temp-1) = aux;
			temp--;
		}
	}
}
int main(int argc,char *argv[]){
	int array[9] = {5.0,9.0,3.0,1.0,2.0,8.0,4.0,7.0,6.0};
	printIntArray(array,9);
	sort(array,9);
	printIntArray(array,9);
}

