/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:46:33 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/25 16:59:51 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	x correr str 1 a 1
**	x a cada iteraccao correr while de set. => funcao: static int check_set(*str, *set) return 1/0
**	x quando deixar de encontrar, define start pos
**	correr 1 a 1 do fim para start pos
**	a cada iteraccao correr while de set. => funcao: static int check_set(*str, *set) return 1/0
**	quando deixar de encontrar, define end pos
**	alocar memoria para len = end - start
**	popular new_str de start a end.
**	return new_str
*/

static int	check_start(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while(i < ft_strlen(set))
	{
		if (*s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	check_end(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while(i < ft_strlen(set))
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
	while(ft_strlen(s1) && check_start(s1, set) == 1) // CHECK START POS
	{
		start++;
		s1++;
	}
	end = ft_strlen(s1) - 1;	
	while(s1[end] && check_end((char *)&s1[end], set) == 1) // CHECK END POS
		end--;
	start = 0;
	result = (char *)malloc(sizeof(char) * (end + 1) + 1);
	if (!result)
		return (NULL);
	while (end-- + 1 > 0)
		result[start] = s1[start++];
	result[start] = '\0';
	return (result);
}



int	main(void)
{
	char	str[50] = ",  ,   , ..abc. ,  .";
	char	set[50] = ",. ";
	char	*result;
	
	result = ft_strtrim(str, set);
	printf("%s", result);
}