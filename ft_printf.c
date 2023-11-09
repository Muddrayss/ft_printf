/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egualand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:19:49 by egualand          #+#    #+#             */
/*   Updated: 2023/11/09 16:40:43 by egualand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	unsigned long		return_val;
	char	*tmp;
	va_list	args;

	return_val = 0;
	va_start(args, s);
	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			if (*s == '%')
			{
				ft_putchar('%');
				return_val++;
			}
			else if (*s == 'c')
			{
				ft_putchar((char)va_arg(args, int));
				return_val++;
			}
			else if (*s == 's')
			{
				tmp = va_arg(args, char *);
				return_val += ft_putstr(tmp);
			}
			else if (*s == 'd' || *s == 'i')
				return_val += ft_putnbr(va_arg(args, int));
			else if (*s == 'u')
				return_val += ft_putnbr_uint((long) va_arg(args, int));
			else if (*s == 'x')
				return_val += ft_putnbr_base(va_arg(args, unsigned long), "0123456789abcdef");
			else if (*s == 'X')
				return_val += ft_putnbr_base(va_arg(args, unsigned long), "0123456789ABCDEF");
			else if (*s == 'p')
				return_val += ft_print_ptr(va_arg(args, long), "0123456789abcdef");
		}
		else
		{
			ft_putchar(*s);
			return_val++;
		}
		if (*s == '\0')
			break;
		s++;
	}
	va_end(args);
	return (return_val);
}
