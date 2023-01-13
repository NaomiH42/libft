/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehasalu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:39:03 by ehasalu           #+#    #+#             */
/*   Updated: 2023/01/13 12:42:33 by ehasalu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;

	temp = NULL;
	while (lst)
	{
		temp = (t_list *)malloc(sizeof(t_list));
		temp = (f)(lst->content);
		lst = lst->next;
		temp = temp->next;
	}
}
