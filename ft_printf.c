/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egualand <egualand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:19:49 by egualand          #+#    #+#             */
/*   Updated: 2023/11/11 14:56:36 by egualand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_type(const char s, va_list args)
{
	int	return_val;

	return_val = 0;
	if (s == '%')
		return_val += ft_putchar('%');
	else if (s == 'c')
		return_val += ft_putchar((char)va_arg(args, int));
	else if (s == 's')
		return_val += ft_putstr(va_arg(args, char *));
	else if (s == 'd' || s == 'i')
		return_val += ft_putnbr(va_arg(args, int));
	else if (s == 'u')
		return_val += ft_putnbr_uint((long)va_arg(args, int));
	else if (s == 'x')
		return_val += ft_putnbr_base(va_arg(args, unsigned long),
				"0123456789abcdef");
	else if (s == 'X')
		return_val += ft_putnbr_base(va_arg(args, unsigned long),
				"0123456789ABCDEF");
	else if (s == 'p')
		return_val += ft_print_ptr(va_arg(args, long), "0123456789abcdef");
	return (return_val);
}

int	ft_printf(const char *s, ...)
{
	unsigned long	return_val;
	va_list			args;

	return_val = 0;
	va_start(args, s);
	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			return_val += check_type(*s, args);
		}
		else
		{
			ft_putchar(*s);
			return_val++;
		}
		if (*s == '\0')
			break ;
		s++;
	}
	va_end(args);
	return (return_val);
}
