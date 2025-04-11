/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:09:25 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/11 13:29:01 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int					i;
	int					real_len;
	char				*str;
	unsigned int		objective_len;

	i = 0;
	objective_len = ft_strlen(s);
	if (len > (objective_len - start))
		real_len = (objective_len - start);
	else
		real_len = (len);
	if (len == 0 || objective_len == 0 || start > (objective_len - 1))
		return (0);
	str = (char *)malloc(real_len + 1);
	if (!str)
		return (0);
	while (i < real_len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
