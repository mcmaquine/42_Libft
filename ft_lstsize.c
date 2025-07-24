/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:36:13 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/24 16:41:52 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
/*
Counts the number of nodes in the list
lst: The beginnig of the list.
Return the length of the list.
*/
int	ft_lstsize(t_list *lst)
{
	int		l_size;
	t_list	*nxt;

	l_size = 0;
	nxt = lst;
	while (nxt != NULL)
	{
		l_size++;
		nxt = nxt->next;
	}
	return (l_size);
}
