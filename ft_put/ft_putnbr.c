#include "ft_printf.h"

unsigned long ft_putnbr(long nb)
{
  unsigned long return_val;

  return_val = 0;
  if (nb < 0)
  {
    ft_putchar('-');
    nb = -nb;
    return_val++;
  }
  if (nb >= 10)
  {
    return_val += ft_putnbr(nb / 10);
    nb = nb % 10;
  }
  if (nb < 10)
    ft_putchar(nb + 48);
  return (return_val + 1);
}