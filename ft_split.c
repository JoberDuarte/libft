/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 08:16:06 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/23 10:03:24 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_word_split(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = ft_calloc(i + 1, sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	split = ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			split[j] = ft_word_split(&s[i], c);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	split[j] = '\0';
	return (split);
}
/* #include <stdio.h>
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hello World This is a test", ' ');
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
} */
