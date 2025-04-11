/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:28:34 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/11 14:18:10 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest2;
	const unsigned char	*src2;

	i = 0;
	dest2 = (unsigned char *)dest + n - 1;
	src2 = (const unsigned char *)src + n - 1;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*dest2 = *src2;
		dest2--;
		src2--;
	}
	return (dest);
}
