/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 01:43:14 by ojebbari          #+#    #+#             */
/*   Updated: 2022/11/05 14:26:20 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;

	if (s == 0 || f == 0)
		return (0);
	p = ft_strdup(s);
	if (!p)
		return (0);
	i = 0;
	while (p[i])
	{
		p[i] = f(i, p[i]);
		i++;
	}
	return (p);
}
