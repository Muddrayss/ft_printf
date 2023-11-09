#include "ft_printf.h"

int ft_putstr(const char *s)
{
  int i;

  if (!s)
    return ft_putstr("(null)");
  i = 0;
  while (s[i] != '\0')
  {
    ft_putchar(s[i]);
    i++;
  }
  return (i);
}