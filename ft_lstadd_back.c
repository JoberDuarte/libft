/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:07:48 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/05 14:12:01 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;
}

/* #include <stdio.h>
int main (void)
{
	t_list *head = ft_lstnew("A");

	t_list *b = ft_lstnew("B");
	ft_lstadd_back(&head, b);
	
	t_list *c = ft_lstnew("C");
	ft_lstadd_back(&head, c);

	t_list *d = ft_lstnew("D");
	ft_lstadd_back(&head, d);

	t_list *temp = head;
	while (temp != NULL)
	{
		printf("%s ", (char *)temp->content);
		temp = temp->next;
	}
	temp = head;
	t_list *next;
	while(temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	return (0);
	
} */