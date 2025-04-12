/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:46:46 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/12 18:02:34 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_is_valid(char chr, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (chr == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = strlen(s1) - 1;
	i = 0;
	if (!s1)
		return (0);
	while (s1[start] && !ft_is_valid(s1[start], set))
		start++;
	while ((end > start) && !ft_is_valid(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(char) * ((end - start) + 2));
	if (!str)
		return (0);
	while (start < (end + 1))
		str[i++] = s1[start++];
	str[start] = '\0';
	return (str);
}

int	main(void)
{
	printf("%s", ft_strtrim("abc1d", "12"));
	return (0);
}
