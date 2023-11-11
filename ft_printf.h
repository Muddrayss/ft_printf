/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egualand <egualand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:38:24 by egualand          #+#    #+#             */
/*   Updated: 2023/11/11 15:00:38 by egualand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int					ft_printf(const char *s, ...);
int					ft_putchar(char c);
int					ft_putstr(const char *s);
unsigned long		ft_putnbr(long nb);
unsigned int		ft_putnbr_uint(long nb);
int					ft_strlen(const char *s);
int					ft_putnbr_base(unsigned int nbr, char *base);
int					ft_print_ptr(unsigned long int nbr, char *base);
int					validate_base(char *base);

#endif
