#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*clreate_array - creates an array of chars and initializes it with
*a specific char.
*@size: size of array.
*@c: char to initialize array with.
*
*Return: NULL if it fails or
*Pointer to array.
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size(char) * size);
	/* check if malloc was successful */
	if (arr == NULL)
		retutn(NULL);

	for (i = 0; i < size; i++){
		arr[i] = c;
	
	return (arr);

}
