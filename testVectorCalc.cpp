#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

void printVector(int myVector[], int size);
void sumaVector(int vector1[3],int vector2[3],int *ptr);
float norma (int myVector[],int size);


int main(){

int a[3] = {1,2,3};
int b[3] = {9,6,-2};
int c[3] = {0,0,0};
int *ptrC = &c[0];

printVector(a,3);

sumaVector(a,b,ptrC);

printVector(c,3);



}

void printVector(int myVector[],int size){
for (int i=0; i<size; i++){
	printf("vector[%d]: %d\n",i,myVector[i]);
	}
}

void sumaVector(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = vector1[i] + vector2[i];
	}
}

float norma (int myVector[],int size){
	float suma=0.0;
	for(int i = 0; i<size; i++){
		suma += myVector[i]^2;
	}

	return sqrt(suma);

}