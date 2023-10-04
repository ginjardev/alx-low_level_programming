#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates array of chars
 * @size: int array size parameter
 * @c: char parameter
 * Return: NULL or pointer to array
 */


char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(sizeof(c) * size);

	while (i < size)
	{
		if (arr == NULL)
		{
			return (NULL);
		}
		arr[i] = c;
		i++;
	}

	return (arr);
}
