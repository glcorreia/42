/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:46:33 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/27 16:16:04 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (*s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	start = 0;
	while (ft_strlen(s1) && check_set(s1, set) == 1)
	{
		start++;
		s1++;
	}
	end = ft_strlen(s1) - 1;
	while (s1[end] && check_set((char *)&s1[end], set) == 1)
		end--;
	start = 0;
	result = (char *)malloc(sizeof(char) * (end + 1) + 1);
	if (!result)
		return (NULL);
	while (end-- + 1 > 0)
	{
		result[start] = s1[start];
		start++;
	}
	result[start] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	str[50] = ",  ,   , ..abc. ,  .";
// 	char	set[50] = ",. ";
// 	char	*result;
// 	result = ft_strtrim(str, set);
// 	printf("%s", result);
// }