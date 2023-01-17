#include <stdio.h>

int A, B, plus, minus, times, divided;

int main(){
	
	printf("Insert a number: \n");
	scanf("%d", &A);
	
	printf("Insert another number: \n");
	scanf("%d", &B);
	
	plus = A + B;
	minus = A - B;
	times = A * B;
	divided = A / B;
	
	printf("Results: \n");
	printf("Addition: %d. \n", plus);
	printf("Subtraction: %d, \n", minus);
	printf("Multiplication: %d. \n", times);
	printf("Division: %d. \n", divided);
	
	system("pause");
	return 0;
	
}
