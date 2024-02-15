/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeloyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:40:38 by tmeloyan          #+#    #+#             */
/*   Updated: 2024/02/15 12:31:38 by tmeloyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*o;

	if (!lst)
		return ;
	while (*lst)
	{
		o = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = o;
	}
	lst = NULL;
}
