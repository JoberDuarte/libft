/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:05:45 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/24 22:20:40 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countleft(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (s1[i])
	{
		found = 0;
		j = 0;
		i++;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (found == 0)
			return (i);
	}
	return (0);
}

static int	ft_countright(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = ft_strlen(s1) -1;
	while (s1[i])
	{
		found = 0;
		j = 0;
		i--;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		
		if (found == 0)
			return (i);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	i = 0;
	start = ft_countleft(s1, set);
	end = ft_countright(s1, set);
	str = malloc(sizeof(char) * (end - start) + 1);
	if (!str)
		return (NULL);
	while ((start +i) <= end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char	*s1 = "lorem ipsum dolor sit amet";
	char	*set = "te";

	printf("%s\n",ft_strtrim(s1, set));
	printf("%d\n", ft_countleft(s1, set));
	printf("%d\n", ft_countright(s1, set));
	printf("%zu\n", ft_strlen(s1));
} */