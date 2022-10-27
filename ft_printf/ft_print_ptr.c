/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrashd <nalrashd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:44:53 by nalrashd          #+#    #+#             */
/*   Updated: 2022/10/27 13:08:43 by nalrashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_lenght(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

int	ft_long_hex(unsigned long n)
{
	int	len;

	len = ft_hex_lenght(n);
	if (n >= 16)
	{
		ft_long_hex(n / 16);
		ft_long_hex(n % 16);
	}
	else if (n <= 9)
		ft_print_putchar(n + '0');
	else if (n > 9 && n < 16)
	{
		ft_print_putchar(n - 10 + 'a');
	}
	return (len);
}

int	ft_print_ptr(unsigned long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_long_hex(n);
	return (len);
}
