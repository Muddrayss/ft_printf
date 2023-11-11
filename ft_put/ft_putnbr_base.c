/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egualand <egualand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:11:10 by egualand          #+#    #+#             */
/*   Updated: 2023/11/11 15:03:23 by egualand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	int		i;
	char	arr[100];
	int		base_len;
	int		return_val;

	i = 0;
	base_len = validate_base(base);
	return_val = 0;
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return (1);
	}
	if (base_len <= 0)
		return (0);
	while (nbr > 0)
	{
		arr[i++] = base[nbr % base_len];
		nbr /= base_len;
		return_val++;
	}
	while (--i >= 0)
		ft_putchar(arr[i]);
	return (return_val);
}

int	ft_print_ptr(unsigned long int nbr, char *base)
{
	int		i;
	char	arr[100];
	int		base_len;
	int		return_val;

	i = 0;
	base_len = validate_base(base);
	return_val = 0;
	if (!nbr)
		return (ft_putstr("(nil)"));
	if (base_len <= 0)
		return (0);
	return_val += ft_putstr("0x");
	while (nbr > 0)
	{
		arr[i++] = base[nbr % base_len];
		nbr /= base_len;
		return_val++;
	}
	while (--i >= 0)
		ft_putchar(arr[i]);
	return (return_val);
}
