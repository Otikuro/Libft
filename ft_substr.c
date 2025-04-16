/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:09:25 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/16 16:39:21 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		objective_len;
	char				*str;

	objective_len = ft_strlen(s);
	if (len > (objective_len - start))
		len = objective_len - start;
	if (len < 1)
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	else if (start > objective_len)
		ft_bzero(str, len);
	else
		ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
