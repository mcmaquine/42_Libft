/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:51:49 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/30 16:47:05 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Adds the node 'new' at the end of the list.
lst: The address of a pointer to the first node of a list.
new: The address of a pointer to the node to be added.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nxt;

	if (!lst)
		return ;
	if (!(*lst))
		(*lst) = new;
	else
	{
		nxt = ft_lstlast(*lst);
		nxt->next = new;
	}
}
