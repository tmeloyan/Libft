/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeloyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:29:40 by tmeloyan          #+#    #+#             */
/*   Updated: 2024/02/11 19:36:53 by tmeloyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*shun;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	shun = ft_lstlast(*lst);
	shun->next = new;
}
