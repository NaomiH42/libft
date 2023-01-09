/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:26:43 by naomi             #+#    #+#             */
/*   Updated: 2022/12/20 19:40:23 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_needle(const char *haystack, const char *needle, size_t i)
{
	size_t	j;

	j = 0;
	while (needle[j])
	{
		if (haystack[i] != needle[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (big[i] && i < len)
	{
		if (is_needle(big, little, i))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}