/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:45:16 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/17 14:19:08 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy(unsigned char *dst, const unsigned char *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
}

/*
The function copies n bytes from memory area src to memory area dest. The memory
areas may overlap: copying takes place as though the bytes in src are first
copied into a temporary array that does not overlap src or dst, and the bytes
are then copied fron the temporary array to dest;
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp;
	const unsigned char	*tsrc;
	unsigned char		*tdest;

	temp = (unsigned char *)malloc(n * sizeof(char));
	if (temp == NULL)
		return (NULL);
	tsrc = src;
	tdest = dest;
	ft_cpy(temp, tsrc, n);
	ft_cpy(tdest, temp, n);
	free(temp);
	return (dest);
}
