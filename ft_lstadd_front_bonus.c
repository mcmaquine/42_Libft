/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:19:52 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/24 14:55:33 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
/*
Adds the node 'new' at the beginning of the list.
lst: The address of a pointer to the first node of a list.
new: The address of a pointer to the node to be added.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst);
}
