/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:35:17 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/29 19:24:19 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*temp;

	temp = (unsigned char *) dest;
	while (count > 0)
	{
		*temp = (unsigned char) c;
		temp++;
		count--;
	}
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char	a[] = "Hello Word";
	int	c = 99;
	size_t	count = 5;
	printf("%s\n", (char *)memset(a, c, count));
	printf("%s\n", (char *)ft_memset(a, c, count));
	return (0);
} */