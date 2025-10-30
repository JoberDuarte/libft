/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:05:45 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/30 13:10:23 by joduarte         ###   ########.fr       */
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
		i++;
	}
	return (0);
}

static int	ft_countright(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	found;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		found = 0;
		j = 0;
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
			return (i + 1);
		i--;
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
	str = ft_calloc((end - start + 1), sizeof(char));
	if (!str)
		return (NULL);
	while ((start + i) < end)
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
	char	*s1 = "lorem \n ipsum \t dolor \n sit \t amet";
	char	*set = " ";

	printf("%s\n",ft_strtrim(s1, set));
	printf("%d\n", ft_countleft(s1, set));
	printf("%d\n", ft_countright(s1, set));
	printf("%zu\n", ft_strlen(s1));
} */