/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:04:35 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/18 11:25:40 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ts1;
	const unsigned char	*ts2;
	int					i;

	ts1 = s1;
	ts2 = s2;
	i = 0;
	while (i < n)
	{
		if (ts1[i] != ts2[i])
			break ;
		i++;
	}
	return (ts1[i] - ts2[i]);
}
