/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeloyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:39:00 by tmeloyan          #+#    #+#             */
/*   Updated: 2024/02/15 19:59:05 by tmeloyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char *str, char k)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == k)
			i++;
		if (str[i] != k)
			count++;
		while (str[i] != k && str[i] != '\0')
			i++;
	}
	return (count);
}

size_t	len(char const *p, char b)
{
	int	i;

	i = 0;
	while (p[i] != b && p[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ptr;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	ptr = (char **)malloc(sizeof(char *) * (count((char *)s, c) + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			ptr[j] = ft_substr(s, i, len(s + i, c));
			if (!ptr[j])
				return (NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	ptr[j] = NULL;
	return (ptr);
}

int main()
{
	char	**res;
	int		i;

	i = 0;
	res = ft_split("  heeHello   World ",' ');
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}
