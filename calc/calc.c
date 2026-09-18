#include <stdio.h>


void add(int num1, int num2) {
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
}

void subtract(int num1, int num2) {
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
}

void multiply(int num1, int num2) {
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
}

void divide(int num1, int num2) {
	if (num2 == 0) {
		printf("Error: Division by zero\n");
		return;
	}
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
}

int main() {

	int num1;
	int num2;
	char operand;


	printf("welcome to shitty calc!\n");
	printf("Input a number: ");

	scanf("%d", &num1);

    printf("Now an operand +,-,*,/: ");
	scanf(" %c", &operand);

    printf("Input another number: ");
	scanf("%d", &num2);


	switch (operand) {
	case '+':
		add(num1, num2);
		break;
	case '-':
		subtract(num1, num2);
		break;
	case '*':
		multiply(num1, num2);
		break;
	case '/':
		divide(num1, num2);
		break;
	default:
		printf("Error: Invalid operand\n");
	}


}
