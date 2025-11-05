/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:42:10 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/28 12:42:10 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>

void	del(void *content)
{
	free(content);
}

int main()
{
	t_list *node = ft_lstnew(ft_strdup("A"));

	t_list *b = ft_lstnew(ft_strdup("B"));
	ft_lstadd_back(&node, b);

	t_list *c = ft_lstnew(ft_strdup("C"));
	ft_lstadd_back(&node, c);

	t_list  *temp = node;
	while(temp != NULL)
	{
		printf("%s ",(char *)temp->content);
		temp = temp->next;
	}
	ft_lstdelone(node->next->next, &del);
	node->next->next = NULL;

	printf("\n");
	temp = node;
	while(temp != NULL)
	{
		printf("%s ",(char *)temp->content);
		temp = temp->next;
	}
	return(0);
} */