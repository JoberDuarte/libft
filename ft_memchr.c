/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:53:09 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/25 19:19:27 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp_s;
	unsigned char	temp_c;

	temp_s = (unsigned char *)s;
	temp_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (temp_s[i] == temp_c)
			return ((void *)&temp_s[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	char *c = ft_memchr("/|\x12\xff\x09\0\x42\042\0\42|\\", '\0', 12);
	char *s = memchr("/|\x12\xff\x09\0\x42\042\0\42|\\", '\0', 12);
	printf("%s\n", c);
	printf("%s\n", s);
}  */