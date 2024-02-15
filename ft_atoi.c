/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeloyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:37:23 by tmeloyan          #+#    #+#             */
/*   Updated: 2024/02/05 20:26:29 by tmeloyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	b;

	i = 0;
	count = 1;
	b = 0;
	while (str[i] && ((str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r')
			|| (str[i] == ' ')))
		i++;
	if (str[i] && ((str[i] == '-') || (str[i] == '+')))
	{
		if (str[i] == '-')
			count = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		b = (b * 10) + (str[i] - '0');
		i++;
	}
	return (b * count);
}
