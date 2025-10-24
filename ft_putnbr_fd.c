/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:39:22 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/24 17:01:17 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num > 9)
		ft_putnbr_fd(num / 10, fd);
	num = (num % 10);
	c = num + '0';
	write(fd, &c, 1);
}

/* #include <stdio.h>

int	main(void)
{
	long	i;

	i = 2147483647;
	ft_putnbr_fd(i, 1);
}
 */