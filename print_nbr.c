/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:38:46 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/24 01:24:26 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_lib.h"

static int	count_n(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = n * -1;
	}
	if (n > 9)
	{
		while (n >= 10)
		{
			count++;
			n = n / 10;
		}
	}
	if (n >= 0 && n <= 9)
		count++;
	return (count);
}

int	print_nbr(int n)
{
	int	count;

	count = count_n(n);
	if (n > 10)
	{
		print_nbr(n / 10);
		print_char((n % 10) + '0');
	}
	else if (n == -2147483648)
		count = print_str("-2147483648");
	else if (n < 0)
	{
		n = n * -1;
		print_char('-');
		print_nbr(n);
	}
	else
	{
		print_char((n % 10) + '0');
	}
	return (count);
}
