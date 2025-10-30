/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:00:13 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/30 11:39:07 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*result;

	i = ft_strlen(s);
	result = NULL;
	while (1)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			result = ((char *)&s[i]);
			return (result);
		}
		if (i == 0)
			break ;
		i--;
	}
	return (result);
}

/* #include <stdio.h>
int main (void)
{
	char	*s = "teste 123456";
	int	c = 357;
	char	*s1 = "teste 123456";
	int	c1 = 357;
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s1, c1));
} */