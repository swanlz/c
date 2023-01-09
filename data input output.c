#include <stdio.h>
#define text "Data input & output"

int age = 0;
float height = 0.0;
char name[50] = "";

int main(){
	
	printf("%s\n", text);
	
	printf("Insert your age:\n");
	scanf("%d", &age);
	
	printf("Insert your height:\n");
	scanf("%f", &height);
	
	printf("Insert your name:\n");
	scanf("%s", &name);
	
	printf("Data inserted is:\n");
	printf("Age: %d. \n", age);
	printf("Height: %.2f. \n", height);
	printf("Name: %s. \n", name);
		
}
