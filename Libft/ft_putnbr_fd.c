/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_putnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:13:10 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/27 20:16:02 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', 1);
			n = -147483648;
		}
		n *= -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, 1);
	ft_putchar_fd(n % 10 + '0', 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
}*/