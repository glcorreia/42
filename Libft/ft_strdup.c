/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:10:45 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/25 15:31:33 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str_copy;

	str_copy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str_copy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str_copy[i] = s[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}

// int	main(void)
// {
// 	char	*str = "Hello world!";
// 	char	*str_copy;
// 	str_copy = ft_strdup(str);
// 	printf("%s", str_copy);
// }