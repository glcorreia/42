/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:31:22 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/11/09 18:38:06 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	size;

	size = ft_strlen((char *)s);
	while (s[size] != (char)c && size != 0)
	{
		size--;
	}
	if (s[size] == (char)c)
		return ((char *)&s[size]);
	return (NULL);
}

// int main(void)
// {
// 	char string[] = "Sad but true";
// 	char ch = 't';

// 	printf("%s", ft_strrchr(string, ch));
// }