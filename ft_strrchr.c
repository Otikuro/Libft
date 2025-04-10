/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 10:50:15 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/09 13:38:26 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ubication;
	int		i;

	ubication = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			ubication = &s[i];
		i++;
	}
	return (ubication);
}
