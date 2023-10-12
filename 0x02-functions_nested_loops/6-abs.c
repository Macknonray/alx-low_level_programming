#include "main.h"

/**
 * _abs - this is ablsolute computers
 * @c: this is the number computed
 * Return: this is always the value 
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;


		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

