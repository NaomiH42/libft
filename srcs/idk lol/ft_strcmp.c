/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:28:55 by naomi             #+#    #+#             */
/*   Updated: 2022/12/21 13:09:32 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	while (*s1 && *s2 && (*(unsigned char *)s1 == *(unsigned char *)s2))
	{
		s1++;
		s2++;
	}
	i = *(unsigned char *)s1 - *(unsigned char *)s2;
	return (i);
}
