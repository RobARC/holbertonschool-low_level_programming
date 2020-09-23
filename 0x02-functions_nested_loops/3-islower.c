#include "holberton.h"
/**
* _islower -Entry point
* @c: Is an entry
* Return:  Always 0 (Success)
*/
int _islower(int c);
{
if  (c > 96  &&  c < 123)
c = 1;
else
c = 0;
return (c);

}
