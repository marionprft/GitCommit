/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapointi <mapointi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 18:26:50 by mapointi          #+#    #+#             */
/*   Updated: 2026/05/08 21:23:08 by mapointi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <string.h>
# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char    *ft_strdup(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);



char    **ft_split(const char* s, char c);


int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);

size_t  ft_strlen(const char *src);
size_t  ft_strlcpy(char* dst, const char* src, size_t size);

void *ft_memset(void *b, int c, size_t n);
void    ft_bzero(void *s, size_t n);

#endif