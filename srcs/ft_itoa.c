/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naomi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:17:38 by naomi             #+#    #+#             */
/*   Updated: 2022/12/19 19:07:46 by naomi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int get_len(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
        {
                len++;
                n *= -1;
        }
	while (n != 0)
	{
		n /= 10;
		len++;	
	}
	return (len);
}

static void res_fill(int n, char *res)
{
	static size_t	i;

	if (n == -2147483648)
        {
                res[0] = '-';
                res[1] = '2';
                n = 147483648;
                i += 2;
        }
        if (n < 0)
        {
                res[i] = '-';
                n *= -1;
                i++;
        }
	if (n >= 10)
	{
		res_fill(n / 10, res);
		res_fill(n % 10, res);
	}
        if (n < 10)
        {
                res[i] = n + '0';
                i++;
        }	
}


char	*ft_itoa(int n)
{
	char	*res;
	
	res = (char *)malloc(sizeof(*res) * (get_len(n) + 1));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	else
		res_fill(n, res);
	res[get_len(n)] = '\0';	
	return (res);
}
