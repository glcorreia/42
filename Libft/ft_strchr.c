/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:18:06 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/21 18:04:07 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (s)
	{
		if (*s == c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char string[] = "Sad but true";
// 	char ch = 'b';

// 	printf("%s", ft_strchr(string, ch));
// }