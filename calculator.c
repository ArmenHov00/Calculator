#include <stdio.h>

int main()
{
	int a;
	int b;
	char op;
	printf("Enter numbers\n");
	scanf("%d %d", &a, &b);
	printf("Enter the operator(+, -, /, *)\n");
	scanf(" %c", &op);

	if (op == '+') 
	{
		printf("%d\n", a + b);
	}
	else if (op == '-')
	{
		printf("%d\n", a - b);
	}
	else if (op == '/')
	{
		if(b == 0)
		{ printf("Can't divide by 0\n");
		}
		else
		{
		printf("%d\n", a / b);
		}
	}
	else if (op == '*')
	{
		printf("%d\n", a * b);
	}
	else 
	{
		printf("Wrong\n");
	}

	return 0;
}
