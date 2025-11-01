/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:44:33 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/01 12:02:13 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* #include <stdio.h>
int main(void)
{
	t_list	*head;
	head = ft_lstnew("A");

	t_list *b = ft_lstnew("B");
	ft_lstadd_front(&head, b);
	
	t_list *c = ft_lstnew("C");
	ft_lstadd_front(&head, c);

	t_list *d = ft_lstnew("D");
	ft_lstadd_front(&head, d);

	t_list *temp = head;
	while(temp != NULL)
	{
		printf("%s ", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");
	printf("%d\n", ft_lstsize(head));

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