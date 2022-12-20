/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:33:10 by naomi             #+#    #+#             */
/*   Updated: 2022/12/19 23:40:44 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
        while (*s1 && *s2 && n)
        {
                if (*s1 != *s2)
                        return (0);
                s1++;
                s2++;
		n--;
        }
	if(*s1 != *s2)
		return (0);
        return (1);
}