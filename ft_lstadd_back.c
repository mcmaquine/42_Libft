/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:51:49 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/24 15:57:24 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
/*
Adds the node 'new' at the end of the list.
lst: The address of a pointer to the first node of a list.
new: The address of a pointer to the node to be added.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nxt;

	nxt = (*lst);
	while (nxt != NULL)
		nxt = nxt->next;
	nxt->next = new;
}
