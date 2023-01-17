#include <stdio.h>

#define text "Sequencial numbers sum"

int n1, n2, n3, n4, n5, total;

int main() {
	printf("%s\n", text);
	printf("Insert 5 numbers, in sequence: \n");
	scanf("%d", &n1);	scanf("%d", &n2);
	scanf("%d", &n3);	scanf("%d", &n4);	scanf("%d", &n5);
	
	total = (n1 + n2 + n3 + n4 + n5);
	
	printf("Total sum is: %d.\n", total);
	
	system("pause");
	return 0;
	
}

