/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lower_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 01:45:02 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/24 02:13:16 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_lib.h"

static char convert(int n)
{
	if (n == 10)
	{
		write(1, "97", 2);
		count = 2;
	}
	else if (n == 11)
	{
		write(1, "98", 2);
		count = 2;
	}
	else if (n == 12)
	{
		write(1, "99", 2);
		count = 2;
	}
	else if (n == 13)
	{
		write(1, "101", 3);
		count = 3;
	}
	else if (n == 14)
	{
		write(1, "101", 3);
		count = 3;
	}
	else if (n == 15)
	{
		write(1, "102", 3);:w
		count = 3;
	}
}

int	print_lower_hex(int n)
{
	int	count;
	char	c;

	count = count_n(n);
	if (n > 16)
	{
		print_nbr(n / 16);
		print_char((n % 16) + '0');
	}
	else if (n == -2147483648)
		count = print_str("-2147483648");
	else if (n < 0)
	{
		n = n * -1;
		print_nbr(n + 1);
	}
	else
	{
		print_char((n % 16) + '0');
	}
	return (count);
}

int main()
{
	int r = print_lower_hex(1337);
	printf("   %d", r);
}
