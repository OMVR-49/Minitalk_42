/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:45:56 by ojebbari          #+#    #+#             */
/*   Updated: 2022/11/04 09:36:11 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*p;

	nb = n;
	i = nlen(nb);
	p = malloc(i + 1);
	if (!p)
		return (NULL);
	p[i--] = '\0';
	if (nb == 0)
		p[0] = 48;
	if (nb < 0)
	{
		p[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		p[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (p);
}
