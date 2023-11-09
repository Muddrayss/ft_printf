#include "ft_printf.h"

unsigned int ft_putnbr_uint(long nb)
{
  if (nb < 0)
    return ft_putnbr((UINT_MAX + nb + 1));
  return ft_putnbr(nb);
}