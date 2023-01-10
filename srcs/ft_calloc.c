/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:47:36 by naomi             #+#    #+#             */
/*   Updated: 2023/01/10 13:16:24 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc (size_t nmemb, size_t size)
{
	void	*temp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, nmemb * size);
	return (temp);
}
