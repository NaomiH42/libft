/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:32:37 by naomi             #+#    #+#             */
/*   Updated: 2022/12/20 18:33:18 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strcmp(const char *s1, const char *s2, size_t n)
{       
        int     i;
	size_t	l;

	l = 0;
        while (s1 && s2 && (*(unsigned char *)s1 == *(unsigned char *)s2) && l < n)
        {       
                s1++;
                s2++;
        }
        i = *(unsigned char *)s1 - *(unsigned char *)s2;
        return (i);
}     
