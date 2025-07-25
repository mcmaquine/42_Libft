/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 21:23:58 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/25 13:33:30 by mmaquine         ###   ########.fr       */
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

	if (nmemb == 0 || size == 0)
		return (malloc(sizeof(void *)));
	if (nmemb == 0 && size == 0)
		return (NULL);
	if (nmemb > 0x7fffffffffffffff || size > 0x7fffffffffffffff)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ptr = ft_bzero(ptr, nmemb * size);
	return (ptr);
}
