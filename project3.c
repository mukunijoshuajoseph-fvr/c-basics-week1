#include <stdio.h>

int main() {
	int num1, num2;

	// Input
	printf("Enter first number: ");
	scanf("%d", &num1);

	printf("Enter second number: ");
	scanf("%d", &num2);

	// Calculations
	int sum = num1 + num2;
	int difference = num1 - num2;
	int product = num1 * num2;
	int quotient = num1 / num2; // Assumes num2 is not zero

	// output
	printf("Sum = %d\n", sum);
	printf("Difference = %d\n", difference);
	printf("Product = %d\n", product);
	printf("Quotient = %d\n", quotient);

	return 0;
}
