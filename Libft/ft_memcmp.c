/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:12:22 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/11/09 18:27:45 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	if (s1 == s2 || n == 0)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		if (n)
			i++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[20] = "A8cdef";
// 	char	str2[20] = "A2CDEF";

// 	printf("%d | ", ft_memcmp(str1, str2, 5));
// 	printf("%d", memcmp(str1, str2, 5));
// }