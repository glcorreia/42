/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:43:47 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/21 17:48:44 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// int	main(void)
// {
// 	char	str1[20] = "123456";
// 	char	str2[20] = "abcdef";
// 	char	str3[20] = "123456";
// 	char	str4[20] = "abcdef";
// 	int		size = 12;

// 	printf("%zu | ", ft_strlcat(str1, str2, size));
// 	printf("%zu\n", strlcat(str3, str4, size));
// 	printf("%s | %s\n", str1, str3);
// }