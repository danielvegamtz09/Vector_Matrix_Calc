#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

void printMatrix(int *ptr,int size1, int size2);
void printMatrix(int arr[3][3]);

int main(){

int a[3][3] = {{1,3,4},{1,3,6},{1,2,3}};
int *ptr2a = &a[0][0];
printMatrix(ptr2a,3,3);
printMatrix(a);

}

void printMatrix(int *ptr,int size1, int size2){
	for(int i = 0; i < size1 ; i++){
		for(int j = 0; j < size2 ; j++){
			printf("%d   ",*(ptr+j+(i*size1)));
		}
		printf("\n");
	}
}

void printMatrix(int arr[3][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d   ",arr[i][j]);
		}
		printf("\n");
	}
}


