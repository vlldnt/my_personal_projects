#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return (a * b);
}

int sub(int a, int b)
{
	return (a - b); 
}

int divi(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		printf("Impossible to divide by 0\n");
}

int mod(int a, int b)
{
	return (a % b);
}

int main(int argc, char *argv[3])
{
	int num1, num2;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	
	if (*operator == '+')
		printf("%d\n", (add(num1, num2)));
	
	else if (*operator == '%' && num2 != 0)
		printf("%d\n", mod(num1, num2));
	
	else if (*operator == '-')
		printf("%d\n", sub(num1, num2));
	
	else if (*operator == '/' && num2 != 0)
		printf("%d\n", divi(num1, num2));

	else if (*operator == '*')
		printf("%d\n", mul(num1, num2));

return (0);
}

