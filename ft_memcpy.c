/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:23:03 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/29 13:18:56 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy(unsigned char *dest, const unsigned char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
}

/*
The function copies n bytes from memory area src to memory area dest. The memory
area must not overlap.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (dest);
	if (((src + n) > dest) || ((dest + n) > src))
		ft_cpy(dest, src, n);
	else
		return (ft_memmove(dest, src, n));
	return (dest);
}
