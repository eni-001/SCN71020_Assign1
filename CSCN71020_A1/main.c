#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();




void main() {
  //Change void main() to int main()

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
        break; //Break statement was added
        case 2:
          subtract();
          break;//Break statement was added again

	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf("%lf", &num1);
	printf("Enter the second value:");
	scanf("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}
void subtract() {
  double num5, num6, result;
  printf("Enter the first value:");
  scanf("%lf", &num5);
  printf("Enter the second value:");
  scanf("%lf", &num6);
  result = num5 - num6;
  printf("%lf - %lf = %lf\n", num5, num6, result);
}