#include <stdio.h>

int main(){
	
	int value = 0;
	printf("Insert a value: \n");
	scanf("%d", &value);
	
	printf("Value before increment: %d. \n", value);
	
	value++;
	printf("Value after increment: %d. \n", value);
	
	value--;
	printf("Value after decrement: %d. \n", value);
	
	value += 5;
	printf("Value after 5 units increment: %d. \n", value);
	
	value -= 5;
	printf("Value after 5 units decrement: %d. \n", value);
	
	value *= 5;
	printf("Value after multiplied by 5: %d. \n", value);
	
	system("pause");
	return 0;
	
	
}
