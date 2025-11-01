/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:14:35 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/01 12:05:31 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* #include <stdio.h>
int main(void)
{
	t_list	*head;
	head = ft_lstnew("A");
	printf("%s\n", (char *)head->content);

	t_list *b = ft_lstnew("B");
	ft_lstadd_front(&head, b);

	t_list *c = ft_lstnew("C");
	ft_lstadd_front(&head, c);

	t_list *temp = head;
	while(temp != NULL)
	{
		printf("%s ", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");
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