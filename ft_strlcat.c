/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:22:27 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/24 21:28:28 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	total_len = src_len + dst_len;
	if (size <= dst_len)
		return (src_len + size);
	while ((i + dst_len) < size - 1 && src[i])
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (total_len);
}

/* #include <stdio.h>

int	main(void)
{
	char dest[20] = "abcdef";
	char src[] = "123456";

	printf("%zu\n", ft_strlcat(dest, src, 5));
	printf("%s\n", dest);

} */