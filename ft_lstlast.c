/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:00:59 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/01 12:57:22 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (!temp)
		return (NULL);
	while (temp->next)
		temp = temp->next;
	return (temp);
}

/* #include <stdio.h>
int main(void)
{
	t_list	*head;
	head = ft_lstnew("A");
	
	t_list	*b = ft_lstnew("B");
	ft_lstadd_front(&head, b);

	t_list	*c = ft_lstnew("C");
	ft_lstadd_front(&head, c);

	t_list	*d = ft_lstnew("D");
	ft_lstadd_front(&head, d);
	
	t_list *last = ft_lstlast(head);
	printf("Last node : %s\n", (char *)last->content);


	t_list *temp = head;
	while(temp != NULL)
	{
		printf("%s ", (char *)temp->content);
		temp = temp->next;
	}
	temp = head;
	t_list	*next;
	while(temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
} */