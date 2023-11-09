/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egualand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:38:24 by egualand          #+#    #+#             */
/*   Updated: 2023/11/09 16:24:29 by egualand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int					ft_printf(const char *s, ...);
void				ft_putchar(char c);
int					ft_putstr(const char *s);
unsigned long		ft_putnbr(long nb);
unsigned int		ft_putnbr_uint(long nb);
int					ft_strlen(const char *s);
int					ft_putnbr_base(unsigned int nbr, char *base);
int					ft_print_ptr(unsigned long int nbr, char *base);

#endif
