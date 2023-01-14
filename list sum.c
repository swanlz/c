#include <stdio.h>

int n1, n2, n3, n4, n5, total;

int main(){
	
	printf("Insert 1st number: \n");
	scanf("%d", &n1);
	
	printf("Insert 2st number: \n");
	scanf("%d", &n2);
	
	printf("Insert 3st number: \n");
	scanf("%d", &n3);
	
	printf("Insert 4st number: \n");
	scanf("%d", &n4);
	
	printf("Insert 5st number: \n");
	scanf("%d", &n5);
	
	total = (n1 + n2 + n3 + n4 + n5);
	
	
	printf("Total sum is: %d. \n", total);
	
	
	return 0;
	
}
