/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:01:08 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/21 18:33:58 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	match;

	i = 0;
	j = ft_strlen(needle);
	match = 0;
	if (j == 0)
		return ((void *)haystack);
	while (i < ft_strlen(haystack))
	{
		if (haystack[i] == needle[match])
			match++;
		else
			match = 0;
		if (match == len)
			return ((char *)&haystack[i - match + 1]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str1[20] = "big bada boom";
// 	char	str2[20] = "bada";
// 	int		i = 4;

// 	printf("%s", ft_strnstr(str1, str2, i));
// }