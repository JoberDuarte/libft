/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:14:47 by joduarte          #+#    #+#             */
/*   Updated: 2025/11/03 17:41:07 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	if (!lst || !f)
		return ;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}

/* #include <stdio.h>

void	lowercase(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
}

int main(void)
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

	ft_lstiter(node, lowercase);

	printf("\n");
	temp = node;
	while(temp != NULL)
	{
		printf("%s ",(char *)temp->content);
		temp = temp->next;
	}

} */