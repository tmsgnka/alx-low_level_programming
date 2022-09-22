#include "main.h"
/**
* print_number - prints an integer
*@n:integer to be printed
*
*/
void print_number(int n)
{
	unsigned in num = n;
	if (n < 0) 
	{
		_putchar('-');
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
