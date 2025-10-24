/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:36:36 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/24 21:45:33 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if(n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n -1)
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		if((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
} */