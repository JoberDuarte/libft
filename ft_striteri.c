/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:09:49 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/24 14:16:18 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* char	ft_toupperchar(unsigned int index, char c)
{
	(void)index;
	return ((char)ft_toupper(c));
}

#include <stdio.h>

int	main(void)
{
	char *s = "abcdef";
	ft_striteri(s, ft_toupperchar);

	printf("%s\n", s);
} */