/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:37:05 by ojebbari          #+#    #+#             */
/*   Updated: 2022/12/18 21:10:26 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printing(va_list ap, char c)
{
	if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'c' )
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_putnbr_u(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_hex(va_arg(ap, int), c));
	else if (c == 'p')
		return (ft_putstr("0x") + ft_ptr(va_arg(ap, unsigned long),
				"0123456789abcdef"));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	p;
	int		t;
	int		i;
	int		e;

	e = write(1, "", 0);
	if (e < 0)
		return (-1);
	i = 0;
	va_start(p, str);
	t = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			t += ft_printing(p, (str[i + 1]));
			i++;
		}
		else
			t += ft_putchar(str[i]);
		i++;
	}
	va_end(p);
	return (t);
}
