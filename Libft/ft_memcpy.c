/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:44:03 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/21 11:24:00 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*new_dest;
	unsigned char	*new_src;

	new_dest = dest;
	new_src = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		*new_dest++ = *new_src++;
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[50] = "www.google.com";
// 	char	dest[50];
// 	printf("%s", ft_memcpy(dest, src, ft_strlen(src) + 1));
// }