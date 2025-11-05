/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:58:52 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/05 15:37:21 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t			i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	if (temp_dest > temp_src)
	{
		while (n--)
			temp_dest[n] = temp_src[n];
	}
	else
	{
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	s[] = "ABCDE";
	char	s1[] = "ABCDE";

	char *ss = memmove(&s[2], s, 3);
	char *ss1 = ft_memmove(&s1[2], s1, 3);
	printf("%s\n",ss);
	printf("%s\n", ss1);

} */