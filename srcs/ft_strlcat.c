/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:09:58 by naomi             #+#    #+#             */
/*   Updated: 2023/01/10 15:12:29 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;
	int	cpysize;
	
	if ((int)size < 0)
		size = 2147483647;
	if (size > ft_strlen(dst))
		len = ft_strlen(src) + ft_strlen(dst);
	else
		len = ft_strlen(src) + size;
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	cpysize = size - i - 1;
	while (src[j] && cpysize > 0)
	{
		dst[i] = src[j];
		i++;
		j++;
		cpysize--;
	}
	dst[i] = '\0';
	return (len);
}
