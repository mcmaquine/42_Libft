/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:55:12 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/23 13:52:35 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates memory (using malloc(3)) and returns a substring from the string 's'
The substring starts at index 'start' and has a maximum length of 'len'.
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	charleft;
	size_t	st;
	char	*sub;

	if (s == NULL)
		return (NULL);
	charleft = ft_strlen(&s[start]);
	if (start > ft_strlen(s))
		return (NULL);
	sub = ft_calloc(charleft + 1, sizeof(char));
	st = 0;
	while (s[start] && (st < len))
	{
		sub[st] = s[start];
		st++;
		start++;
	}
	sub[st] = '\0';
	return (sub);
}
