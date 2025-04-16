/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 22:22:12 by marvin            #+#    #+#             */
/*   Updated: 2025/04/14 22:22:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_node;
	t_list	*previous_node;
	t_list	*new_node;

	first_node = NULL;
	previous_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (first_node == NULL)
			first_node = new_node;
		if (previous_node == NULL)
			previous_node = new_node;
		else
		{
			previous_node->next = new_node;
			previous_node = new_node;
		}
		lst = lst->next;
	}
	return (first_node);
}
