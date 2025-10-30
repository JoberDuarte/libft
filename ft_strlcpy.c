/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:44:16 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/30 10:38:53 by joduarte         ###   ########.fr       */
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
    char dest[30] = "123";
    char dest1[30] = "123";
    

    printf("Retorno: %zu\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 1));
    printf("Retorno: %zu\n", strlcpy(dest1, "lorem ipsum dolor sit amet", 1));
    printf("Conteúdo de dest: %s\n", dest);
    printf("Conteúdo de dest: %s\n", dest1);

    return (0);
} */