/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:38:45 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/25 13:52:35 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_spaces(const char *str)
{
	int	i;
	int	spaces;

	i = 0;
	spaces = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			spaces++;
		else
			break ;
		i++;
	}
	return (spaces);
}

int	ft_atoi(const char *str)
{
	int		nbr;
	int		i;
	int		is_pos;

	i = check_spaces(str);
	nbr = 0;
	is_pos = 1;
	if (str[i] == '-')
	{
		is_pos = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			nbr = (nbr * 10) + (str[i] - 48);
		else
			break ;
		i++;
	}
	return (nbr * is_pos);
}

// int	main(void)
// {
// 	char	str[15] = "   -1234 5";

// 	printf("%d\n", ft_atoi(str));
// }