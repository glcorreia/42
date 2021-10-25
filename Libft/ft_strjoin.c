/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:11:21 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/25 16:46:15 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join_str;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) + ft_strlen(s2);
	join_str = (char *)malloc(sizeof(char) * (i + 1));
	if (!join_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join_str[i + j] = s2[j];
		j++;
	}
	join_str[i + j] = '\0';
	return (join_str);
}

// int	main(void)
// {
// 	char	str1[10] = "abc";
// 	char	str2[10] = "def";
// 	char	*result;

// 	result = ft_strjoin(str1, str2);
// 	printf("%s", result);
// }