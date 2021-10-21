/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:12:22 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/21 17:53:52 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(char *)s1 != *(char *)s2)
			return (*(char *)s1 - *(char *)s2);
		s1++;
		s2++;
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