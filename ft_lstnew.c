/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:07:11 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/25 14:41:01 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
/*
Allocates memory (using malloc(3)) and returns a new node. The 'content' member
varaiable is initialized with the given parameter 'content'. The varible 'next'
is initialized to NULL
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	return (new_node);
}
