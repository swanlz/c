#include <stdio.h>
#include <math.h>

#define ANSI_COLOR_BLUE "\e[0;34m"
#define ANSI_COLOR_RESET "\e[0;37m"


 float weight = 0;
 float height = 0;
 float bmi = 0;
 

int main(){
	printf("Insert your weight (example: 62.7): \n");
	scanf("%f", &weight);
	
	printf("Insert your height (example: 1.72): \n");
	scanf("%f", &height);
	
	bmi = weight / (height * height);
	
	printf("Underweight: <18,5 \n");
	printf("Normal: 18,5 - 24,9 \n");
	printf("Overweight: 25,0 - 29,9 \n");
	printf("Obese: >30,0 \n");
	
	printf("--------------------------------\n");
	printf("\n");
	
	printf(ANSI_COLOR_BLUE "Your bmi is: %.2f \n" ANSI_COLOR_RESET, bmi);
	return 0;

}
