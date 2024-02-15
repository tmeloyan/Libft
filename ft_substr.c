/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeloyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:18:31 by tmeloyan          #+#    #+#             */
/*   Updated: 2024/02/06 15:19:18 by tmeloyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	j;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen (s) - start;
	ptr = (char *)malloc((sizeof(char)) * (len + 1));
	if (!ptr)
		return (NULL);
	j = 0;
	while (j < len && s[start])
	{
		ptr[j] = s[start];
		j++;
		start++;
	}
	ptr[j] = '\0';
	return (ptr);
}
