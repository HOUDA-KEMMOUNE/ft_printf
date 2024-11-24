/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_lib.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 00:37:36 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/24 16:40:12 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_LIB_H
#define PRINTF_LIB_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		print_char(int c);
int		print_str(char *s);
int		print_nbr(int n);
int		print_unsigned(unsigned int n);
int		print_hex(int n, char low_upp);

#endif
