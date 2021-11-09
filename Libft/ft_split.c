/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:35:40 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/11/09 16:21:47 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		len;
	size_t		index;
	const char	*start;
	char		**split;

	split = (char **) malloc(sizeof(*split) * ((count_words(s, c)) + 1));
	if (!split)
		return (0);
	index = 0;
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		start = s;
		len = 0;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		if (*(s - 1) != c)
			split[index++] = ft_substr(start, 0, len);
	}
	split[index] = 0;
	return (split);
}
