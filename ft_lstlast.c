/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:43:05 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/24 15:59:51 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
/*
Retuns the last node of the list.
lst: The beginning of the list.
Return the last node of the list.
*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nxt;
	
	nxt = lst;
	while (nxt->next != NULL)
		nxt = nxt->next;
	return (nxt);
}
