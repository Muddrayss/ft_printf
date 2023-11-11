/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egualand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:04:39 by egualand          #+#    #+#             */
/*   Updated: 2023/11/11 15:05:46 by egualand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

unsigned int	ft_putnbr_uint(long nb)
{
	if (nb < 0)
		return (ft_putnbr((UINT_MAX + nb + 1)));
	return (ft_putnbr(nb));
}
