/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:18:25 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/30 08:49:23 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
/* #include <stdio.h>
int main (void)
{
	char s[] = "hello world";
	char s1[] = "hello world";

	ft_bzero(s, 12);
	bzero(s1, 12);
	for (int i = 0; i < 12; i++)
		printf("%d", s[i]);
	printf("\n");
	for (int i = 0; i < 12; i++)
		printf("%d", s1[i]);
	printf("\n");
	return (0);
} */