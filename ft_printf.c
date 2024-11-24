/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:06:56 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/24 12:30:38 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_lib.h"

static int	print_format(char specifier, va_list args)
{
	int	count;

	va_start(args, specifier);
	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(specifier, int));
	else if (specifier == 's')
		count += print_str(va_arg(specifier, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_nbr(va_arg(specifier, int));
	else if (specifier == 'x')
		count += print_hex(va_arg(specifier, int), 'x');
	else if (specifier == 'X')
		count += print_hex(va_arg(specifier, int), 'X');
	else if (specifier == 'u')
		count += print_unsigned(va_arg(specifier, unsigned int));
	else
		count += write(1, "%", 1);
	return (count);	
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), args);
		else
			count += write(1, format, 1);
		format++;
	}
	return (count);
}
