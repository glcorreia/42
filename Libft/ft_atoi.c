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

#include "libft.h"

int	check_spaces(const char *str)
{
	int	i;
	int	spaces;

	i = 0;
	spaces = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			spaces++;
		i++;
	}
	return (spaces);
}

int	ft_atoi(const char *str)
{
	int		nbr;
	int		i;
	int		isPos;

	i = check_spaces(str);
	nbr = 0;
	isPos = 1;
	if (str[i] == '-')
	{
		isPos = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			nbr = (nbr * 10) + (str[i] - 48);
		else
			return (0);
		i++;
	}
	return (nbr * isPos);
}

/*int	main(void)
{
	char	str[15] = " -123";
	
	printf("%d", ft_atoi(str));
}*/