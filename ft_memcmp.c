/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:20:57 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/10 11:52:14 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*arr1;
	char	*arr2;

	i = 0;
	arr1 = (char *)s1;
	arr2 = (char *)s2;
	while (arr1[i] && arr2[i] && arr1[i] == arr2[i] && (i < n))
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)arr1[i] - (unsigned char)arr2[i]);
}
