/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:58:52 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/25 18:28:58 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
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
int main ()
{
	char s[] = "Hello World";
	printf("%s", s);
	char *ss = ft_memmove(&s[3], &s[0], 6);
	printf("\n%s", ss);
} */