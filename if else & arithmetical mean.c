#include <stdio.h>
#define text "##if else & arithmetical mean##"

float g1, g2, g3, med;
char stud[30];

int main(){
	
	printf("%s\n", text);
	printf("Enter student name:\n");
	scanf("%s", &stud);
	
	printf("Enter three grades, in sequence:\n");
	scanf("%f", &g1); scanf("%f", &g2);	scanf("%f", &g3);
	
	med = (g1 + g2 + g3) / 3;
	
	printf("Arithmetical mean is: %.2f\n", med);
	
	if (med >= 6)
	{
		printf("%s has passed!\n", stud);
	}
	else
	{
		printf("%s has flunked!\n", stud);
	}
	
	system("pause");
}





