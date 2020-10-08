/**
 * is_prime_number-Entry point
 * @n: is a variable int
 * @: is a variable int
 *  Return: Always 0.
 */
int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
		return (0);
	else if (n % 7 == 0 || n % 9 == 0)
		return (0);
	else
		return (1);

}
