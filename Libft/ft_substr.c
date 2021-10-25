/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:32:09 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/25 16:10:39 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}

// int	main(void)
// {
// 	char	str[30] = "Swim hard. Dream big.";
// 	int		pos = 11;
// 	int		size = 5;
// 	char	*result = ft_substr(str, pos, size);

// 	printf("%s", result);
// }
