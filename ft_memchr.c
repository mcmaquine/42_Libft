/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:24:27 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/18 11:32:50 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sc;
	unsigned char		uc;

	uc = ft_isascii(c);
	if (!uc)
		return (NULL);
	sc = s;
	while (n > 0)
	{
		if (*sc == uc)
			return ((void *)sc);
		n--;
		sc++;
	}
	return (NULL);
}
