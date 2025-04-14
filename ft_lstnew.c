/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:15:33 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/14 22:25:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct t_list	node;
	
	node = (t_list)malloc(sizeof(t_list))
	if (!node)
		return (NULL);
	node = {content, NULL};
	return (node);
}
