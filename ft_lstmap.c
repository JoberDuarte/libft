/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:30:07 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/03 16:33:59 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* #include <stdio.h>

void	*lowercase(void *content)
{
	char	*s = (char *)content;
	char	*copy = ft_strdup(s);
	int	i = 0;

	if(!copy)
		return (NULL);
	while(copy[i])
	{
		copy[i] = ft_tolower(copy[i]);
		i++;
	}
	return(copy);
}

void	del(void *content)
{
	free(content);
}

int main(void)
{
	t_list	*l1 = ft_lstnew(ft_strdup("ABCD"));

	t_list	*b = ft_lstnew(ft_strdup("BCDE"));
	ft_lstadd_back(&l1, b);
	
	t_list	*c = ft_lstnew(ft_strdup("CDEF"));
	ft_lstadd_back(&l1, c);

	t_list *temp = l1;
	while(temp != NULL)
	{
		printf("%s ", (char *) temp->content);
		temp = temp->next;
	}
	printf("\n");
	t_list	*new = ft_lstmap(l1, lowercase, del);
	
	
	temp = l1;
	while(temp != NULL)
	{
		printf("%s ", (char *) temp->content);
		temp = temp->next;
	}
	temp = new;
	printf("\n");
	while(temp != NULL)
	{
		printf("%s ", (char *) temp->content);
		temp = temp->next;
	}
	return (0);
} */