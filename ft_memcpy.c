/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:23:03 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/16 16:55:42 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The function copies n bytes from memory area src to memory area dest. The memory
area must not overlap.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (((src + n) >= dest) || ((dest + n) >= src))
		return (ft_memmove(void *dest, const void *src, size_t n));
}
