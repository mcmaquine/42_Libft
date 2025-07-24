/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:07:11 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/24 14:16:33 by mmaquine         ###   ########.fr       */
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
	t_list	*newNode;

	newNode = (t_list *)malloc(sizeof(t_list));
	if (!newNode)
		return (NULL);
	newNode -> content = content;
	return (newNode);
}
