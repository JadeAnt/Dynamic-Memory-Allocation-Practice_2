#include <stdio.h>
#include <stdlib.h>

int main(){
	int *a;
	float *b;
	
	typedef struct{
		int x, y;
	}actions;
	
	actions *test;
	
	//Dynamically allocation an integer
	a = (int*)malloc(sizeof(int));
	if(a == NULL){
		printf("Error memory cannot be allocated");
		exit(1);
	}
	
	//Dynamically allocating a float
	b = (float*)malloc(sizeof(float));
	if(b == NULL){
		printf("Error memory cannot be allocated");
		exit(1);
	}
	
	//Dynamically allocating a struct
	test = (actions*)malloc(sizeof(actions));
	if(test == NULL){
		printf("Error memory cannot be allocated");
		exit(1);
	}
	
	//Assigining a dynamically allocated integer a value
	*a = 5;
	
	//Assinging a dynamically allocated float a value
	*b = 4.6;
	
	// To assign a dynamically allocated struct variable a value
	test ->x = 2; // OR (*test).x = 2;
	test ->y = 3; // OR (*test).y = 3;
	
	printf("a = %d and b = %f", *a, *b);
	printf("\n (*test).x = %d and (*test).y = %d", test ->x, test ->y);
	
	
}
