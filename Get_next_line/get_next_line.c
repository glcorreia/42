/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:29:40 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/11/10 10:29:40 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		ret;
	char	buf[4096];
	
	while ((read(fd, buf, 4096)) > 0)
	{
		printf("%s", buf);
	}
}

int	main(void)
{
	int	fd1;

	fd1 = open("test.txt", O_RDONLY);
	printf("%s", get_next_line(fd1));
}