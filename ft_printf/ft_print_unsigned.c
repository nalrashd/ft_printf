/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrashd <nalrashd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:46:27 by nalrashd          #+#    #+#             */
/*   Updated: 2022/10/27 13:09:01 by nalrashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	unsigned int	len;

	len = 0;
	if (nb >= 10)
	{
		len = len + ft_print_unsigned(nb / 10);
		len = len + ft_print_unsigned(nb % 10);
	}
	else
		len = len + ft_print_putchar(nb + '0');
	return (len);
}
