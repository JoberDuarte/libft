/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:22:27 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/21 11:48:19 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	total_len;

	dst_len = ft_strlen(dst);
	total_len = ft_strlen(src) + dst_len;
	if (dst_len == size)
		return (total_len);
	while (*src != '\0' && dst_len < size)
		dst[dst_len++] = *(src++);
	dst[dst_len++] = '\0';
	return (total_len);
}

/* #include <stdio.h>
int	main(void)
{
	char dest[14] = "Ola mundo";
	char src[] = "Mundo";

	//int x = ft_strlcat(dest, src, 15);
	//printf("necessary size: %d\n", (x));
	//printf("result: %s\n", dest);
	printf("%zu\n", ft_strlcat(dest, src, 14));
	printf("%s\n", dest);
	printf("%lu\n", sizeof(dest));

} */