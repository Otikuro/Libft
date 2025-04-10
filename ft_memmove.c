/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:28:34 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/10 11:52:24 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest2;
	char	*src2;

	i = 0;
	dest2 = (char *)dest + n - 1;
	src2 = (char *)src + n - 1;
	while (n-- > 0)
	{
		*dest2 = *src2;
		dest2--;
		src2--;
	}
	return (dest);
}
