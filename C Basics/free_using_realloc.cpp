//Program to deallocate memory without using free.
//geeksforgeeks
#include<stdio.h>
#include<stdlib.h>

int main() {
//	This will cause memory leak if free is not called
	int *ptr = (int*)malloc(10);
//	This will function like free if size is 0
	realloc(ptr, 0);
	return 0;
}
