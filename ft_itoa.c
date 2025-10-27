/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:06:24 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/27 14:06:53 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int c)
{
	int		len;
	long	num;

	len = 0;
	num = c;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	len = ft_intlen(n);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	int		i;
	char	*s;

	i = -10;
	s = ft_itoa(i);
	printf("%s\n", s);
	for (i = 0; i < 5; i++)
	{
		printf("%02x", s[i]);
	}
	free(s);
} */
