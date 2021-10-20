/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:24:01 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/20 14:43:06 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dstsize);
}

// int	main(void)
// {
// 	char	str1[20] = "Big bada boom";
// 	char	str2[20];
// 	int		size = 3;

// 	printf("%zu\n", ft_strlcpy(str2, str1, size));
// }