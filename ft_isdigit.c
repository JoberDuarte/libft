/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:37:02 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/29 17:22:43 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (2048);
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	int c;
	c = 48;

	printf("%d\n", ft_isdigit(c));
	printf("%d\n",  isdigit(c));
} */