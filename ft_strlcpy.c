/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:58:03 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/17 19:58:08 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Copy the input string into a destination string. If the destination buffer,
limited by its size, isn't large enough to hold the copy, the resulting string
is truncated (but it is guaranteed to be null-terminated).
*/
size_t	strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (!dst)
		return (0);
	while (src[i] && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}