/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:44:16 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/24 18:15:32 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (i < size -1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/* #include <stdio.h>
int main(void)
{
    char dest[30] = "rrrrrr";

    printf("Retorno: %zu\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
    printf("Conteúdo de dest: %s\n", dest);

    return (0);
} */