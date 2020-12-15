#include "holberton.h"
/**
* _isalpha -Entry point
* @c: Is an entry
* Return:  Always 0 (Success)
*/
int _isalpha(int c)
{
if ((c > 96  && c < 123) || (c > 64  && c < 91))
c = 1;
else
c = 0;
return (c);
}
