/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeloyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:13:21 by tmeloyan          #+#    #+#             */
/*   Updated: 2024/02/15 12:34:16 by tmeloyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*shun;

	if (!(shun = (t_list *)malloc(sizeof(*shun))))
		return (NULL);
	shun->content = content;
	shun->next = NULL;
	return (shun);
}
