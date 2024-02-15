/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeloyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:18:56 by tmeloyan          #+#    #+#             */
/*   Updated: 2024/02/05 18:24:43 by tmeloyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *) dst;
	str2 = (char *) src;
	if (!str1 && !str2)
		return (NULL);
	if (str1 < str2)
	{
		i = -1;
		while (++i < len)
			str1[i] = str2[i];
	}
	else
	{
		i = len - 1;
		while (i < len)
		{
			str1[i] = str2[i];
			i--;
		}
	}
	return (dst);
}
