#include <stdio.h>
#include <stdlib.h>

int	add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

void calculate_and_print(int x, int y, int (*op_func_ptr)(int, int)) 
{
/*todo*/
}

int	main(int argc, char **argv) 
{
    int num1;
    int num2;

	if (argc != 3)
		return (printf("Usage: ./a.out <int> <int>"));
	num1 = 0;
	num2 = 0;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
    printf("Add:\n");
    calculate_and_print(num1, num2, add);

    printf("Subtract:\n");
    calculate_and_print(num1, num2, subtract);

    printf("Multiply:\n");
    calculate_and_print(num1, num2, multiply);

    return 0;
}