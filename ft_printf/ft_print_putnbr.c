/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrashd <nalrashd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:03:51 by nalrashd          #+#    #+#             */
/*   Updated: 2022/10/27 13:08:54 by nalrashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		len += write(1, "-2147483648", 11);
		return (len);
	}
	if (nb < 0)
	{
		len += ft_print_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		len += ft_print_putnbr(nb / 10);
		len += ft_print_putnbr(nb % 10);
	}
	else
		len += ft_print_putchar(nb + '0');
	return (len);
}
