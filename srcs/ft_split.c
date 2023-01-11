/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:50:11 by naomi             #+#    #+#             */
/*   Updated: 2023/01/11 15:42:27 by ehasalu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static size_t	words_n(char const *s, char c)
{
	size_t i;
	int	flag;
	size_t words;

	words = 0;
	flag = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && flag)
		{
			words++;
			flag = 0;
		}
		else if (s[i] == c)
		{
			flag = 1;
		}
		i++;
	}
	return (words);
}

static	size_t	get_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char 	**res;
	size_t	i;
	size_t	j;
	size_t	words;

	i = 0;
	j = 0;
	words = words_n(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	while (i < words)
	{
		while (*s)
		{
		if (*s != c)
		{
			res[i] = (char*)malloc(sizeof(char) * (get_len(s, c) + 1));
			while (*s && *s != c)
			{
				res[i][j] = *s;
				s++;
				j++;
			}
			res[i][j] = '\0';
			i++;
		}
		j = 0;
		s++;
		}
	}
	res[i] = NULL;
	return (res);
}
