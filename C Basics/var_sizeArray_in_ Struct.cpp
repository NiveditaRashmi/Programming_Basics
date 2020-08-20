//This code is not working. Check for the error.
//C program for variable length members in structures in GCC before C99
//Geeksforgeeks
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct student {
	int stud_id;
	int name_len;
	int struct_size;
	char stud_name[0]; 				//variable length array must be declarred at last.
};

//memory allocation and initialization of structure.

struct student *createStudent(struct student *s, int id, char a[]) {
	
	s = malloc(sizeof(*s) + sizeof(char) * strlen(a) );
	s->stud_id = id;
	s->name_len = strlen(a);
	strcpy(s->stud_name, a);
	
	s->struct_size = (sizeof(*s) + sizeof(char) * strlen(s->stud_name) )
	return s;
}

void printStudent(struct student *s) {
	printf("Student id: %d\n"
			"Stud_name: %s\n"
			"Name_lenght: %d\n"
			"Allocated struct size: %d\n",
			s->stud_id, s->stud_name, s->name_len, s->struct_size );
}

int main() {
	struct student *s1, *s2;
	
	s1 = createStudent(s1, 456, "Nivedita");
	s2 = createStudent(s2, 576, "Pauline");
	
	printStudent(s1);
	printStudent(s2);
	
	printf("Size of struct student: %lu\n", sizeof(struct student));
	printf("Size of struct pointer: %lu", sizeof(s1));
	
	return 0;
}
