/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:44:16 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/20 21:19:53 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	while (size-- - 1 > 0 && *src != '\0')
		*(dest++) = *(src++);
	*dest = '\0';
	return (src_len);
}

/* #include <stdio.h>
int main(void)
{
    char src[] = "Hello WoLrd.";
    char dest[10];

    printf("Retorno: %zu\n", ft_strlcpy(dest, src, sizeof(dest)));
    printf("Conteúdo de dest: %s\n", dest);
    printf("Conteúdo de dest: %s\n", src);

    return (0);
} */