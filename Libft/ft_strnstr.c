/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:01:08 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/20 12:02:06 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *fullStr, char *searchStr, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	match;

	i = 0;
	j = ft_strlen(searchStr);
	match = 0;
	if (j == 0)
		return (fullStr);
	while (i < ft_strlen(fullStr))
	{
		if (fullStr[i] == searchStr[match])
			match++;
		else
			match = 0;
		if (match == len)
			return (&fullStr[i - match + 1]);
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