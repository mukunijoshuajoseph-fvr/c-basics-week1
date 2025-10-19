#include <stdio.h>

int main() {
	// print your own details
	printf("My name is joseph mukuni.\n");
	printf("I am 22 years old.\n");
	printf("My favourite hobby is drawing.\n");

	// Ask the user for their name and age
	char name[50];
	int age;

	printf("Enter your name: ");
	scanf("%s", name);
	
	printf("Enter your age:");
	scanf("%d", &age);

	//Greet the user
	printf("Hello %s! you are %d years old.\n", name, age);

	return 0;
} 
