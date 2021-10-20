/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:43:47 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/20 15:48:15 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	int		dstsize;

	i = 0;
	dstsize = ft_strlen(dst);
	if (dstsize == 0 || dstsize >= size)
	{
		return (size);
	}
	while (dstsize + i < size)
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (size);
}

// int	main(void)
// {
// 	char	str1[20] = "123456";
// 	char	str2[20] = "abcdef";
// 	int		size = 9;

// 	printf("%zu\n", ft_strlcat(str1, str2, size));
// }