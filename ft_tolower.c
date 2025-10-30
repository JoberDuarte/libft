/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:28:19 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/30 11:01:25 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/* #include <stdio.h>
int main (void)
{
	char	s[] = "HELLO WORLD";
	char	s1[] = "HELLO WORLD";
	int	l = ft_strlen(s);
	int i = 0;

	while(i < l)
	{
		s[i] = ft_tolower(s[i]);
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while(i < l)
	{
		s1[i] = tolower(s1[i]);
		printf("%c", s1[i]);
		i++;
	}
	printf("\n");
	return (0);
} */