/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeloyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:12:18 by tmeloyan          #+#    #+#             */
/*   Updated: 2024/02/15 12:26:27 by tmeloyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*int main()
{
	printf("\n---- putendl_fd ----\n");
	printf(": Put str and newline 'Hello', on fd 2");
	ft_putendl_fd("Hello", 2);
	printf("\n");

}*/