/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 01:45:02 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/24 16:39:18 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_lib.h"

int	print_hex(int n, char low_upp)
{
	int	count;
	unsigned int	num;

	count = 0;
	num = (unsigned int)n;
	if (num)
	{
		count += print_hex((num / 16), low_upp);
		if (num % 16 <= 9)
			count += print_char((num % 16) + '0');
		else if (num % 16 >= 10)
		{
			if (low_upp == 'x')
				count += print_char((num % 16) - 10 + 'a');
			else if (low_upp == 'X')
				count += print_char((num % 16) - 10 + 'A');
		}
	}
	return (count);
}
