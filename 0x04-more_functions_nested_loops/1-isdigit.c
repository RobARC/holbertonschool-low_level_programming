#include "holberton.h"
/**
* _isdigit -Entry point
* @c: Is a variable
* @d: Is una varible
* Return:  Always 0 (Success)
*/
int _isdigit(int c)
{
char d = '0';
c = (c - d);
if (c >= 0 && c <= 9)
c = 1;
else
c = 0;
return (c);
}
