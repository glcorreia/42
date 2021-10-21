/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:53:18 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/21 17:52:53 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s++ == (unsigned char)c)
			return ((void *)s - 1);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[20] = "www.google.com";
// 	char	chr = '.';
// 	printf("%s", ft_memchr(str, chr, ft_strlen(str)));	 
// }