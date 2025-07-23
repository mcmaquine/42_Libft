/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 21:23:58 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/23 10:42:35 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The function allocates memory for an array of nmemb elements of size bytes each
and returns a pointer to the allocated memory. The memory is set to zero. If
nmemb or size is 0, then ft_calloc() returns a unique pointer value that can
later be successfully passed to free().
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb * size == 0)
		return (malloc(sizeof(void *)));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ptr = ft_bzero(ptr, nmemb * size);
	return (ptr);
}
