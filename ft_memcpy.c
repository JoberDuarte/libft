/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:13:37 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/24 17:19:11 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	if (src == NULL && dest == NULL)
		return (dest);
	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	while (n > 0)
	{
		*(temp_dest++) = *(temp_src++);
		n--;
	}
	return (dest);
}
/* #include <stdio.h>

int main(void)
{
	char	s[] = "Ola mundo";
	char	s1[] = "Ola mundo";

	char *ss = memcpy(&s[2], s, 4);
	char *ss1 = ft_memcpy(&s1[2], s1, 4);
	printf("%s\n",ss);
	printf("%s\n", ss1);
	
} */