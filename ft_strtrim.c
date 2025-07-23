/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:58:40 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/23 15:33:00 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	if (set == NULL)
		return (0);
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	count_chars(const char *s1, const char *set)
{
	size_t	count;
	size_t	pos;

	count = 0;
	pos = 0;
	while (s1[pos])
	{
		if (!in_set(s1[pos], set))
			count++;
		pos++;
	}
	return (count);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed;
	size_t	pos;
	size_t	t_pos;

	if (s1 == NULL)
		return (NULL);
	pos = 0;
	t_pos = 0;
	trimmed = (char *)ft_calloc(count_chars(s1, set) + 1, sizeof(char));
	if (!trimmed)
		return (NULL);
	while (s1[pos])
	{
		if (!in_set(s1[pos], set))
		{
			trimmed[t_pos] = s1[pos];
			t_pos++;
		}
		pos++;
	}
	return (trimmed);
}
