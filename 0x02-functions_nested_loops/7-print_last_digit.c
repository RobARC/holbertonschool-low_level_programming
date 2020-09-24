#include "holberton.h"
/**
* print_last_digit -Entry point
* @a: Is a variable
* Return:  Always 0 (Success)
*/
int print_last_digit(int a)
{
if (a > 0)
{
a = (a  % 10);
a = (a * 1);
return (a);
}
else if  (a < 0)
{
a = (a % 10);
a = (a * -1);
return (a);
}
else
{
return (a);
}

}
