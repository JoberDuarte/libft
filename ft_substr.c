/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:49:56 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/05 14:52:28 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	result_len;
	size_t	s_len;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		result_len = 0;
	else if (len > (s_len - start))
		result_len = (s_len - start);
	else
		result_len = len;
	sub = malloc(sizeof(char) * (result_len + 1));
	if (!sub)
		return (NULL);
	while (i < result_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/* #include <stdio.h>

int	main(void)
{
	char *s = "Hello World";
	int start = 5;
	int end = 12;

	printf("%s\n", ft_substr(s, start, end));
} */