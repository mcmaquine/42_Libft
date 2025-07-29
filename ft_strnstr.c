/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:36:08 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/29 17:58:23 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The function locates the first occurrence of the null-terminated string little
in the string big, where not more than len charactes are searched. Characters
that appear after a '\0' character are not searched.
If little is an empty string, big is returned; if little occurs nowhere in big,
NULL is returned; otherwise a pointer to the first character of the first
occurrence of little is returned.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!ft_strlen(little))
		return ((char *)big);
	if (!ft_strlen(big) || !len)
		return (NULL);
	i = 0;
	while (i < ft_strlen(big) && i < len)
	{
		if (!ft_strncmp(&big[i], little, ft_strlen(little)))
			return ((char *)&big[i]);
		i++;
		if (i + ft_strlen(little) > len)
			break ;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char *big = "abcdef";
	char *little = "abcdefghijklmnop";
	size_t	max = strlen(big);

	printf("%s\n", ft_strnstr(big, little, max));
	printf("%s\n", strnstr(big, little, max));	
}*/
