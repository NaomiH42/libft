/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:33:07 by naomi             #+#    #+#             */
/*   Updated: 2022/12/21 13:36:33 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*res;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		else
		{
			i++;
			len++;
		}
	}
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
        {
                if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
                        i++;
                else
                {
                        res[j] = s[i];
			i++;
			j++;
                }
        }
	res[j] = '\0';
	return (res);

}
