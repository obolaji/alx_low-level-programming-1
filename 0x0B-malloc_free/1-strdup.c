#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *newstr;
	int i;
	int k;

	if (str == NULL)
	{ 
		return (NULL);
	}

	for (k = 0; str[k] != '\0'; k++);
	newstr = (char *)malloc(sizeof(char) * (k + 1));

	if (newstr == NULL)
	{ 
		return (NULL);
	}

	for (i = 0; newstr[i]; i++)
		newstr[i] = str[i];
	return (newstr);
}

