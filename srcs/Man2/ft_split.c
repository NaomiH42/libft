/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:50:11 by naomi             #+#    #+#             */
/*   Updated: 2022/12/21 14:02:17 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static	size_t	get_len(char const *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int	flag;
	char 	**res;
	size_t	word;
	size_t	j;
	
	flag = 1;
	i = 0;
	word = 0;
	res = (char **)malloc(sizeof(char *) * words_n(s, c));
	while (s[i])
	{
		if (s[i] != c && flag)
		{
			res[word] = (char *)malloc(sizeof(char) * get_len(s, c, i));
			flag = 0;
		}
		j = 0;
		while (s[i] != c)
		{
			res[word][j] = s[i];
			j++;
			i++;
		}
		if (s[i] == c)
		{
			flag = 1;
			word++;
		}
		i++;
	}
	return (res);
}
