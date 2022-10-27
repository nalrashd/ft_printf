/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrashd <nalrashd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:05:33 by nalrashd          #+#    #+#             */
/*   Updated: 2022/09/07 15:34:50 by nalrashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_flag(va_list argptr, char c);
int	ft_print_hex(unsigned int n, char find);
int	ft_hex_len(unsigned int n);
int	ft_print_ptr(unsigned long n);
int	ft_long_hex(unsigned long n);
int	ft_hex_lenght(unsigned long n);
int	ft_print_putchar(char c);
int	ft_print_putnbr(int nb);
int	ft_print_str(const char *s);
int	ft_print_unsigned(unsigned int nb);

#endif