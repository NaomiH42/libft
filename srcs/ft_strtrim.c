/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:33:07 by naomi             #+#    #+#             */
/*   Updated: 2023/01/10 16:17:30 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	len;
	char *temp;
	size_t	j;

	len = ft_strlen(s1);
	i = 0;
	start = 0;
	j = 0;
	while (in_set(s1[i], set))
	{
		i++;
		start++;
	}
	while (in_set(s1[len-1], set))
		len--;
	if (start >= len)
		return (ft_strdup(""));
	temp = (char *)malloc(sizeof(char) * (len - start + 1));
	if (!temp)
		return (NULL);
	while (start < len)
	{
		temp[j] = s1[start];
		start++;
		j++;
	}
	temp[j] = '\0';
	return (temp);
}
