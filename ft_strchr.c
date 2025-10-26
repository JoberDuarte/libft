/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:35:51 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/26 09:43:55 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (1)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main (void)
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
		char *d1 = strchr(src, '\0');
		char *d2 = ft_strchr(src, '\0');

	printf("%s\n", d1);
	printf("%s\n", d2);
} */