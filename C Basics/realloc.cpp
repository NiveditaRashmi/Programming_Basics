//This program shows the usage of realloc function in C
//geeksforgeeks
//geetting garbage value after 6 elements. Why?
#include<stdio.h>
#include<stdlib.h>

int main() {
	int *ptr;
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	ptr = (int*)calloc(n, sizeof(int));
	
	if(ptr==NULL) {
		printf("memory not allocated\n");
		exit(0);
	} else {
		printf("memory successfully allocated using calloc.\n");
		printf("elements of the array are: ");
		for(int i=0; i<n; ++i) {
			printf("%d, ", ptr[i]);
		}
		
		printf("\nEnter the new size: ");
		scanf("%d", &n);
		ptr = (int*)realloc(ptr, n * sizeof(int));
		
		printf("memory successfully reallocated using realloc\n");
		
		printf("New array elements are: ");
		for(int i=0; i<n; i++) {
			printf("%d, ", ptr[i]);
		}
	}
	free(ptr);
	printf("\ndmemory deallocated successfully");
	return 0;
}
