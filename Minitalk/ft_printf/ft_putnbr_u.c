/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:51:11 by ojebbari          #+#    #+#             */
/*   Updated: 2022/12/18 14:32:23 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int u)
{
	if (u >= 10)
		return (ft_putnbr_u(u / 10) + ft_putchar(u % 10 + '0'));
	else
		return (ft_putchar(u + '0'));
}
