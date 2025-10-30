/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:35:17 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/30 14:12:58 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *) dest;
	while (i < count)
	{
		temp[i] = (unsigned char) c;
		i++;
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