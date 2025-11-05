/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:52:52 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/05 11:34:45 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next;

	temp = NULL;
	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		next = temp->next;
		del(temp->content);
		free(temp);
		temp = next;
	}
	*lst = NULL;
}

/* void	del(void *content)
{
	free(content);
}
#include <stdio.h>
int main()
{
	t_list	*node = ft_lstnew(ft_strdup("A"));

	t_list	*b = ft_lstnew(ft_strdup("B"));
	ft_lstadd_back(&node, b);

	t_list	*c = ft_lstnew(ft_strdup("C"));
	ft_lstadd_back(&node, c);

	t_list *temp = node;
	while(temp != NULL)
	{
		printf("%s ",(char *)temp->content);
		temp = temp->next;
	}
	
	ft_lstclear(&node, &del);
	printf("\n");
	printf("%s\n",(char *)node);
	
} */	