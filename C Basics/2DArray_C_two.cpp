//Program to create a dynamic 2D array using an array of pointers.
#include<stdio.h>
#include<stdlib.h>

int main() {
	int r=3, c=4, count=0;
	int *arr[r];
	for(int i=0; i<r; i++){
		arr[i]=(int*)malloc(c*sizeof(int));
		{
			for(int j=0; j<c; j++){
				arr[i][j]=++count;
			}
		}
	}
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d ", *(*(arr+i)+j));
		}
	}
}
