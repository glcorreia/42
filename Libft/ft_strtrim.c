/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:46:33 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/11/09 19:20:58 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && check_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_set(s1[end - 1], set))
		end--;
	dest = (char *)malloc(sizeof(char) * end - start + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i] && start < end)
	{
		dest[i] = s1[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	str[50] = ",  ,   , ..abc. ,  .";
// 	char	set[50] = ",. ";
// 	char	*result;
// 	result = ft_strtrim(str, set);
// 	printf("%s", result);
// }