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

static int	check_start(const char *str, const char *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, str[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	//char	*new_str;
	size_t	start;
	/*size_t	end;
	size_t	i;

	i = 0;*/
	
	start = check_start(s1, set);
	printf("\n%d:", start);
	
}
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


int	main(void)
{
	char	str[50] = ", .abc..";
	char	set[3] = {'.', ',', ' '};
	char	*result;
	
	result = ft_strtrim(str, set);
	printf("%s", result);
}