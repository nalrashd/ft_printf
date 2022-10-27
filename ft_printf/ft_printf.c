/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrashd <nalrashd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:11:09 by nalrashd          #+#    #+#             */
/*   Updated: 2022/10/27 13:09:06 by nalrashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag(va_list argptr, char c)
{
	int	x;

	x = 0;
	if (c == 'c')
		x += ft_print_putchar(va_arg(argptr, int));
	else if (c == 's')
		x += ft_print_str(va_arg(argptr, char *));
	else if (c == '%')
		x += ft_print_putchar('%');
	else if (c == 'd' || c == 'i')
		x += ft_print_putnbr(va_arg(argptr, int));
	else if (c == 'x' || c == 'X')
		x += ft_print_hex(va_arg(argptr, unsigned int), c);
	else if (c == 'p')
		x += ft_print_ptr(va_arg(argptr, unsigned long));
	else if (c == 'u')
		x += ft_print_unsigned(va_arg(argptr, unsigned int));
	return (x);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		x;
	va_list	argptr;

	i = 0;
	x = 0;
	va_start (argptr, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			x += ft_flag(argptr, format[i + 1]);
			i++;
		}
		else
			x += write(1, &format[i], 1);
		i++;
	}
	va_end (argptr);
	return (x);
}
