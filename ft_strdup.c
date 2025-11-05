/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:25:40 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/05 15:24:49 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	dest = ft_calloc((i + 1), sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/* #include <stdio.h>

int main (void)
{
	char	*str = "NULL";
	char	 *s = ft_strdup(str);
	printf("%s\n", s);

	char	*str1 = NULL;
	char	 *s1 = strdup(str1);
	printf("%s\n", s1);
} */