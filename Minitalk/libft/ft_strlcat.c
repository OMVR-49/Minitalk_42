/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:24:44 by ojebbari          #+#    #+#             */
/*   Updated: 2022/11/05 14:26:04 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	if (dstsize == 0 && dst == 0)
		return (ft_strlen(src));
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (!dstsize || dstsize <= d)
		return (s + dstsize);
	i = 0;
	while (d + i < (dstsize - 1) && src[i] != '\0')
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
