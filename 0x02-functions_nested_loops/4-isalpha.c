#include "main.h"
/**
 * _isalpha - Checks the charcter
 * @c: The charceter itself
 * Return: 1 for everthing
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

