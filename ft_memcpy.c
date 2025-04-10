/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:07:06 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/08 13:20:16 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest2;
	char	*src2;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
