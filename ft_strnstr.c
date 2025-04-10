/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:44:09 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/09 13:55:20 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	needle_len = ft_strlen(little);
	if (needle_len == 0)
		return ((char *)big);
	if (needle_len > ft_strlen(big))
		return (0);
	else
	{
		i = 0;
		j = 0;
		while (big[i] && (i < len))
		{
			if (big[i] == little[j])
				j++;
			else
				j = 0;
			if (j == needle_len)
				return ((char *)(big + (i - needle_len + 1)));
			i++;
		}
		return (0);
	}
}
