/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:36:16 by ojebbari          #+#    #+#             */
/*   Updated: 2022/11/05 14:26:29 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*nee;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	hay = (char *)haystack;
	nee = (char *)needle;
	if (nee[j] == '\0')
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		while (hay[i + j] == nee[j] && hay[i + j] != '\0' && i + j < len)
			j++;
		if (nee[j] == '\0')
			return (hay + i);
		i++;
		j = 0;
	}
	return (0);
}
