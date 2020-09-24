#include "holberton.h"
/**
* _isdigit -Entry point
* @c: Is a variable
* Return:  Always 0 (Success)
*/
int _isdigit(int c)
{
if (c <= 9)
c = 1;
else if (c == '0')
c = 1;
else
c = 0;
return (c);
}
