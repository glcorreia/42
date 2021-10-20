/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:17:35 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/18 16:27:08 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (i >= n)
			str[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char src[20] = "carro";
// 	ft_bzero(src, 2);
// }