/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:13:37 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/05 16:26:00 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;
	size_t				i;

	i = 0;
	if (src == NULL && dest == NULL)
		return (dest);
	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}
/* #include <stdio.h>

int	main(void)
{
	char	s[] = "ABCDE";
	char	s1[10];

	char *ss = memcpy(s1, s, 6);
	char *ss1 = ft_memcpy(s1, s, 6);
	printf("%s\n",ss);
	printf("%s\n", ss1);
} */