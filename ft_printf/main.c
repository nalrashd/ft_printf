/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrashd <nalrashd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:36:30 by nalrashd          #+#    #+#             */
/*   Updated: 2022/10/27 13:05:59 by nalrashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*p;
	int	n = 25;
	/*------------This is the built int printf------------*/
	printf("\n\033[0;36m------------Built in printf------------\033[0m\n\n");
	printf("The is string: %s\n", "Hello world");
	printf("The is decimal: %d\n", '6');
	printf("The is integer: %i\n", '6');
	printf("The is unsigned decimal: %u\n", '6');
	printf("The is lower case hexa: %x\n", n);
	printf("The is upper case hexa: %X\n", n);
	printf("The is pointer: %p\n", p);
	printf("The is character: %c\n", 'n');
	printf("The is percentage: %%\n\n");
	
	/*------------This is my ft_printf------------*/
	ft_printf("\n\033[0;32m------------My ft_printf------------\033[0m\n\n");
	ft_printf("The is string: %s\n", "Hello world");
	ft_printf("The is decimal: %d\n", '6');
	ft_printf("The is integer: %i\n", '6');
	ft_printf("The is unsigned decimal: %u\n", '6');
	ft_printf("The is lower case hexa: %x\n", n);
	ft_printf("The is upper case hexa: %X\n", n);
	ft_printf("The is pointer: %p\n", p);
	ft_printf("The is character: %c\n", 'n');
	ft_printf("The is percentage: %%\n\n");
}
