/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joduarte <joduarte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:35:17 by joduarte          #+#    #+#             */
/*   Updated: 2025/10/20 13:49:37 by joduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*temp;

	temp = (unsigned char *) dest;
	while (count > 0)
	{
		*temp = (unsigned char) c;
		temp++;
		count--;
	}
	return (dest);
}
