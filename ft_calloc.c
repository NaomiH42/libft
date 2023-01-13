/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehasalu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:57:30 by ehasalu           #+#    #+#             */
/*   Updated: 2023/01/13 13:48:31 by ehasalu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;
	size_t	test;

	test = nmemb * size;
	if (test / nmemb != size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	temp = malloc(size * nmemb);
	if (!temp)
		return (NULL);
	ft_bzero(temp, size * nmemb);
	return (temp);
}
