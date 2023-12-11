/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:43:11 by ojebbari          #+#    #+#             */
/*   Updated: 2022/11/04 09:53:08 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordc(char const *s, char c)
{
	size_t	i;
	size_t	x;
	size_t	y;

	y = 0;
	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			x++;
		while (s[i] != c && s[i])
			i++;
	}
	return (x);
}

static char	*wordp(const char *s, int st, int en)
{
	char	*p;
	int		x;

	x = 0;
	p = malloc((en - st + 1) * sizeof(char));
	while (st < en)
		p[x++] = s[st++];
	p[x] = '\0';
	return (p);
}

static char	**hola(char	**str, int i)
{
	while (i < 0)
	{
		free(str[i]);
		str[i] = NULL;
		i--;
	}
	free (str);
	str = NULL;
	return (NULL);
}

void	zero(size_t *i, size_t *t, int *k)
{
	*i = 0;
	*t = 0;
	*k = -1;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	int		k;

	zero(&i, &j, &k);
	if (!s)
		return (0);
	split = malloc((wordc(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			split[j++] = wordp(s, k, i);
			if (!split)
				return (hola(split, j));
			k = -1;
		}
		i++;
	}
	return (split[j] = 0, split);
}
