/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:42:11 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/24 16:02:34 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
/*
Deletes and frees the given node and all its successors, using the function 
'del' and free(3). Finally, set the pointer to the list to NULL.
lst: The address of a pointer to a node.
del: The address of the function used to delete the content of the node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;
	t_list	*pres;

	nxt = (*lst);
	while (nxt != NULL)
	{
		pres = nxt;
		nxt = nxt->next;
		ft_lstdelone(pres, del);
	}
}