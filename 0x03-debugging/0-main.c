#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * main - prints the largest of 3 integers
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 98 % 2;
	positive_or_negative(i);

	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);
	return (0);
}
