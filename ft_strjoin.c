/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:06:38 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/22 14:35:46 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy(char *tojoin, char const *s, size_t *j)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		tojoin[*j] = s[i];
		i++;
		(*j)++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	j;

	joined = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	j = 0;
	if (s1 != NULL)
		ft_cpy(joined, s1, &j);
	if (s2 != NULL)
		ft_cpy(joined, s2, &j);
	joined[j] = '\0';
	return (joined);
}
