/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:15:23 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/01 11:36:20 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* #include <stdio.h>

int main(void)
{
	t_list	*node;
	char	*s = "A";

	node = ft_lstnew(s);
	printf("%p\n", node);
	printf("%s\n", (char *)node->content);
	printf("%p\n", (void *)node->next);
	free(node);
	return (0);
} */
