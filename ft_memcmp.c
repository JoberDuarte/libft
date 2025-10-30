/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:29:58 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/30 12:21:33 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (temp_s1[i] != temp_s2[i])
		{
			if (temp_s1[i] > temp_s2[i])
				return (1);
			else
				return (-1);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
int main (void)
{
	printf("%d\n", ft_memcmp("ABC", "AB",3));
	printf("%d\n", memcmp("ABC", "AB", 3));
	return (0);
} */