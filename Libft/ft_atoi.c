/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:38:45 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/21 17:51:36 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

int	ft_atoi(const char *str)
{
	int		nbr;
	int		i;

	i = 0;
	while (str)
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
		else if (str[i] >= 0 && str[i] <= 9)
			break;
		else if (str[i] == '-')
		{
			nbr = -1;
			break;
		}
		else
			return (0);
		str++;	
	}
	while (str)
	{
		if (str[i] < 0 || str[i] > 9)
			return (0);
			
		str++;
	}
			
}

int	main(void)
{
	char	str[15] = "-12345";
	
	printf("string: %s to int: %d", str, ft_atoi(str));
}*/