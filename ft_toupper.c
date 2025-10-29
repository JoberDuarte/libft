/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:48:27 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/29 19:17:44 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/* #include <stdio.h>
int main ()
{
	char s[] = "hello world";
	size_t l = strlen(s);
	size_t i = 0;
	while(i < l)
	{
		s[i] = ft_toupper(s[i]);

	}
	printf("%s\n", s);
	free(s);
} */
