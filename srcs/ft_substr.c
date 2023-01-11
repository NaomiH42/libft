/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehasalu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:28:32 by ehasalu           #+#    #+#             */
/*   Updated: 2023/01/11 15:28:54 by ehasalu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	length;

	length = ft_strlen(s) - start;
	if (len < length)
		length = len;	
	if (start > ft_strlen(s))
	{
		res = (char *)malloc(sizeof(char) * 1);
		return (res);
	}
	if (len < (size_t)length)
		length = len;
	i = 0;
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (!res)
		return (NULL);
	while (len > 0 && s[start])
	{
		res[i] = s[start];
		i++;
		start++;
		len--;
	}
	res[i] = '\0';
	return (res);
}
