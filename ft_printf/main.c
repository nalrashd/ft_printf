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
	int	f = 25;
	/*------------This is the built int printf------------*/
	printf("\n\033[0;36m------------Built in printf------------\033[0m\n\n");
	printf("The is string %s\n", "Hello my name is Noora Alrashdi");
	printf("The is decimal: %d\n", '6');
	printf("The is integer: %i\n", '6');
	printf("The is unsigned decimal: %u\n", '6');
	printf("The is lower case hexa: %x\n", f);
	printf("The is upper case hexa: %X\n", f);
	printf("The is  pointer: %p\n", p);
	printf("The is haracter: %c\n", 'f');
	printf("The is percentage: %%\n\n");
	
	/*------------This is my ft_printf------------*/
	ft_printf("\n\033[0;32m------------My ft_printf------------\033[0m\n\n");
	ft_printf("The is string: %s\n", "Hello my name is Noora Alrashdi");
	ft_printf("The is decimal: %d\n", '6');
	ft_printf("The is integer: %i\n", '6');
	ft_printf("The is unsigned decimal: %u\n", '6');
	ft_printf("The is lower case hexa: %x\n", f);
	ft_printf("The is upper case hexa: %X\n", f);
	ft_printf("The is pointer: %p\n", p);
	ft_printf("The is character: %c\n", 'f');
	ft_printf("The is percentage: %%\n\n");
}
