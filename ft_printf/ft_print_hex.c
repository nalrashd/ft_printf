/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrashd <nalrashd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:45:13 by nalrashd          #+#    #+#             */
/*   Updated: 2022/10/27 13:08:21 by nalrashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int n)
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

int	ft_print_hex(unsigned int n, char find)
{
	int	len;

	len = ft_hex_len(n);
	if (n >= 16)
	{
		ft_print_hex(n / 16, find);
		ft_print_hex(n % 16, find);
	}
	else if (n <= 9)
		ft_print_putchar(n + '0');
	else if (n > 9 && n < 16)
	{
		if (find == 'x')
			ft_print_putchar(n - 10 + 'a');
		if (find == 'X')
			ft_print_putchar(n - 10 + 'A');
	}
	return (len);
}
