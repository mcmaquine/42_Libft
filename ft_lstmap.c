/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:18:57 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/24 16:58:39 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
/*
Iterates through the list 'lst', applies the function 'f' to each node's content
and creates a new list resulting of the successive applications of the function
'f'. The 'del' function is used to delete the content of a node if needed.
lst: The address of a pointer to a node.
f: The address of the function applied to each node's content .
del: The address of the function used to delete a node's content if neede
*/
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*nxt;

	if (lst == NULL)
		return (NULL);
	
}
