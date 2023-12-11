/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:20:35 by ojebbari          #+#    #+#             */
/*   Updated: 2022/11/06 16:58:29 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s) - start;
	p = (char *)malloc(len + 1);
	if (!p)
		return (0);
	i = start;
	j = 0;
	while (s[i] != '\0')
	{
		if (i < (len + start))
		{
			p[j++] = s[i];
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}
