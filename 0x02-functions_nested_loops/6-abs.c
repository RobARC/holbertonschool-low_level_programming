#include "holberton.h"
/**
* _abs -Entry point
* @a: Is a variable
* Return:  Always 0 (Success)
*/
int _abs(int a)
{
	if (a  > 0)
	{
	return (a);
	}
	else if (a < 0)
	{
	a = (a * -1);
	return (a);
	}
	else
	{
	return (a);
	}
}
