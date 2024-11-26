/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:27:57 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/26 14:23:12 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_address(void *ptr)
{
	int					count;
	unsigned long int	address;

	if (!ptr)
		return (print_str("(nil)"));
	address = (unsigned long int)ptr;
	count = 0;
	count += print_str("0x");
	count += print_hex(address, 'x');
	return (count);
}
