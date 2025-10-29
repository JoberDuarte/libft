/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:18:25 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/29 19:41:27 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *) s;
	while (n > 0)
	{
		*temp = 0;
		temp++;
		n--;
	}
}
/* #include <stdio.h>
int main (void)
{
	char s[] = "hello word";
	char s1[] = "hello word";
	
	ft_bzero(s, 1);
	bzero(s1, 1);
	for (int i = 0; i < 11; i++)
		printf("%d", s[i]);
	printf("\n");
	for (int i = 0; i < 11; i++)
		printf("%d", s1[i]);
	printf("\n");
	return (0);
} */