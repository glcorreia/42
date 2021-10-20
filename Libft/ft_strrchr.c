/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:31:22 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/18 16:35:14 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (j > 0)
		return (&str[j]);
	return (NULL);
}

// int main(void)
// {
// 	char string[] = "Sad but true";
// 	char ch = 'u';

// 	printf("%s", ft_strrchr(string, ch));
// }