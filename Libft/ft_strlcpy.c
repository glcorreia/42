/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:24:01 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/11/09 18:37:32 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize)
	{
		i = 0;
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	str1[20] = "Big bada boom";
// 	char	str2[20];
// 	char	str3[20] = "Big bada boom";
// 	char	str4[20];
// 	int		size = 3;

// 	printf("%zu\n", ft_strlcpy(str2, str1, size));
// 	printf("%s\n\n", str2);
// 	printf("%zu\n", ft_strlcpy(str4, str3, size));
// 	printf("%s\n", str4);
// }