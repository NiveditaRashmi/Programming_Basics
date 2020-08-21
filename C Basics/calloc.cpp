//This program shows the usage of calloc function in C
//geeksforgeeks
#include<stdio.h>
#include<stdlib.h>

int main() {
	int *ptr;
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	ptr = (int*)calloc(n, sizeof(int));
	if(ptr == NULL) {
		printf("memory not allocated\n");
		exit(0);
	} else {
		printf("memory successfully allocated using calloc. \n");
		
//		for(int i=0; i<n; ++i) {
//			ptr[i] = i+1;
//		}
		
		printf("Elements of the array are: \n");
		for(int i=0; i<n; i++) {
			printf("%d, ", ptr[i] );
		}
	}
	printf("\n");
	free(ptr);
	printf("memory deallocated");
	return 0;
}
