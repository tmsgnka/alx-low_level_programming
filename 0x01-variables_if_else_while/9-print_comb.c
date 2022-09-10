Task #.txt
Who has access

System properties
Type
Text
Size
532 bytes
Storage used
532 bytes
Location
0x01-variables_if_else_while
Owner
Antony Bahati
Modified
Sep 9, 2022 by Antony Bahati
Opened
3:11 AM by me
Created
Sep 9, 2022
No description
Viewers can download
#include <stdio.h>
/**
 * main - printing numbers from 0-9 with commas and space between them
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
