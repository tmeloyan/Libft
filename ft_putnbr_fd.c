/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeloyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:14:08 by tmeloyan          #+#    #+#             */
/*   Updated: 2024/02/15 12:28:13 by tmeloyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(int c, int fd)
{
	char	soxik;

	soxik = c + 48;
	write (fd, &soxik, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2147483648", 11);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar (n, fd);
}

// int	main()
// {
// 	printf("\n---- putnbr_fd ----\n");
// 	ft_putnbr_fd(54, 1);
// 	ft_putstr_fd("\n", 1);
// 	ft_putnbr_fd(540056, 1);
// 	ft_putstr_fd("\n", 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putstr_fd("\n", 1);
// 	ft_putnbr_fd(-54, 1);
// 	ft_putstr_fd("\n", 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	ft_putstr_fd("\n", 1);
// 	ft_putnbr_fd(2147483647, 1);
// 	ft_putstr_fd("\n", 1);
// }