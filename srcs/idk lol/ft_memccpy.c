/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 00:32:46 by naomi             #+#    #+#             */
/*   Updated: 2022/12/20 20:27:21 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		if (*(unsigned char *)src == c)
		{
			dest++;
			return (dest);
		}
		src++;
		dest++;
		i++;
	}
	return (NULL);
}
