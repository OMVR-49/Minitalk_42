/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:12:20 by ojebbari          #+#    #+#             */
/*   Updated: 2022/11/18 12:38:21 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;
	size_t	i;

	i = 0;
	ds = (char *)dst;
	sr = (char *)src;
	if (ds > sr)
	{
		while (len > 0)
		{
			len--;
			ds[len] = sr[len];
		}
	}
	else
		ft_memcpy(ds, sr, len);
	return (dst);
}
