/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:18:42 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/30 12:48:07 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	if (count == 0 || size == 0)
		return (malloc(0));
	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
/* #include<stdio.h>

int main(void)
{
	char	*str = "Hello World";
	char *s = ft_calloc(strlen(str) + 1, sizeof(char));
	if(!s)
		return (1);
	strcpy(s, str);
	printf("%s\n", s);
	free(s);
	return (0);
} */