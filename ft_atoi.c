/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:53:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/10 11:51:06 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	if (nptr[i] == '-')
	{
		sign = -sign;
		i++;
	}
	if (nptr[i] == '+')
		i++;
	while (nptr[i])
	{
		if (!ft_isdigit(nptr[i]))
			return (0);
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}
