/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:54:39 by ojebbari          #+#    #+#             */
/*   Updated: 2022/12/18 21:22:28 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	if (n < 0)
		return (ft_putchar('-') + ft_putnbr(-n));
	else if (n < 10)
		return (ft_putchar(n + 48));
	else
		return (ft_putnbr(n / 10) + ft_putnbr (n % 10));
}
