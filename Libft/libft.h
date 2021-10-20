/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:17:00 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/20 15:48:29 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_isalnum(char c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
unsigned int	ft_strlen(char *str);
void			ft_bzero(void *s, size_t n);
int				ft_toupper(int ch);
int				ft_tolower(int ch);
const char		*ft_strchr(const char *str, int c);
const char		*ft_strrchr(const char *str, int c);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
char			*ft_strnstr(char *fullStr, char *searchStr, size_t len);
size_t			ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, char *src, size_t size);

#endif