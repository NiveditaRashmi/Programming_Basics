//Program to show the way malloc is used in C
//GeeksforGeeks
#include<stdio.h>
#include<stdlib.h>

int main() {
	int* ptr;
	int n;
	printf("Enter number of elements: ");
	ptr = (int*)malloc(n * sizeof(int));
	scanf("%d", &n);
	
	if(ptr == NULL) {
		printf("memory not allocated\n");
		exit(0);
	} else {
		printf( "memory successfully allocated using malloc.\n");
		
		for(int i=0; i<n; ++i) {
			ptr[i] = i+1;	
		}
		for(int i=0; i<n ; ++i) {
			printf("%d,  ", ptr[i]);
		}
	}
	printf("\n");
	free(ptr);
	printf("memory deallocated");
	return 0;
	
}
