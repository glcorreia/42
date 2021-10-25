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

char	*ft_strtrim(char const *s1, char const *set)
{
	
}

int	main(void)
{
	char	str[50] = " . ., .lalala welcome to the jungle .,, .  . ";
	char	set[3] = {' ', ',', '.'};
	char	*result;
	
	result = ft_strtrim(str, set);
	printf("%s", result);
}