#include "holberton.h"
/**
* _isupper -Entry point
* @c: Is a variable
* Return:  Always 0 (Success)
*/
int _isupper(int c)
{
if (c > 64  && c < 91)
c = 1;
else
c = 0;
return (c);
}
