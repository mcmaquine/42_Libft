/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:03:51 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/24 16:17:09 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
/*
Iterates through the list 'lst' and applies the function 'f' to the content of
each node
lst: The address of a pointer to a node.
f: The address of the function to apply to each node's content
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nxt;

	nxt = lst;
	while (nxt != NULL)
	{
		(*f)(nxt->content);
		nxt = nxt->next;
	}
}
