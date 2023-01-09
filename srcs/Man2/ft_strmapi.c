/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:49:08 by naomi             #+#    #+#             */
/*   Updated: 2022/12/21 13:49:57 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(unsigned int, char))
{
        unsigned int	i;
        char    *res;

        res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
        i = 0;
        while (*s)
        {
                res[i] = (*f)(i, *s);
                i++;
		s++;
        }
        res[i] = '\0';
        return (res);
}

