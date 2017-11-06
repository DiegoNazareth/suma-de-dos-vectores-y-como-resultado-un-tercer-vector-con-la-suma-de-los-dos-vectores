//suma de los dos vectores y resultando un tercer vector son la suma de los valores del primer y segundo vector
#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,  n=0;
	int vector[n], vector1[n], vector2[n];
	printf("Dame el tamaño del vector\n");
	scanf("%d", &n);
	printf("Dame los valores para llenar el vector\n");
	for(i=0;i<n;i++){
		scanf("%d", &vector[i]);
	
	}
	for(i=0;i<n;i++){
		printf("numero ingresados  %d\n", vector[i]);
	}
	printf("Dame el tamaño de la segunda matriz\n");
	scanf("%d", &n);
	printf("Dame los valores para llenar el segundo vector\n");
	for(i=0;i<n;i++){
		scanf("%d", &vector1[i]);
	}
	for(i=0;i<n;i++){
		printf("numeros ingresados %d\n", vector1[i]);
	}
		printf("Hasta que posicion del vector quieres sumar\n");
	scanf("%d", &n);
	for (i=0;i<n;i++){
		vector2[i]=vector[i]+vector1[i];
	}
	for(i=0;i<n;i++){
		printf("Suma de los dos vectores %d\n", vector2[i]);
	}
	
	return(0);
}
