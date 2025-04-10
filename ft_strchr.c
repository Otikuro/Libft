/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:40:10 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/09 13:39:00 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ubication;
	int		i;

	ubication = 0;
	i = 0;
	while (s[i] && s[i] != c)
	{
		if (s[i] == c)
			ubication = &s[i];
		i++;
	}
	return (ubication);
}
