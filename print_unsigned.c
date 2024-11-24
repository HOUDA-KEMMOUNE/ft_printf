#include "printf_lib.h"

static int	count_n(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		while (n >= 10)
		{
			count++;
			n = n / 10;
		}
	}
	if (n <= 9)
		count++;
	return (count);
}

int	print_unsigned(unsigned int n)
{
	int	count;

	count = count_n(n);
	if (n > 10)
	{
		print_nbr(n / 10);
		print_char((n % 10) + '0');
	}
	else
	{
		print_char((n % 10) + '0');
	}
	return (count);
}
