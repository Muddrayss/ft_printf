/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egualand <egualand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:39:41 by egualand          #+#    #+#             */
/*   Updated: 2023/11/09 17:22:13 by egualand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int validate_base(char *base)
{
  int i;
  int j;

  i = 0;
  if (base[i] == '\0' || base[i + 1] == '\0')
    return (-1);
  while (base[i] != '\0')
  {
    j = i + 1;
    if (base[i] == '+' || base[i] == '-')
      return (-1);
    while (base[j] != '\0')
    {
      if (base[i] == base[j++])
        return (-1);
    }
    i++;
  }
  return (i);
}