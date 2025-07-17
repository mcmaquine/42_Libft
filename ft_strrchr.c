/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:41:17 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/17 17:48:48 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The functon returns a pointer to the last occurrence of the character c in the
string s. Return NULL if character is not found
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	
	last = NULL;
	while(*s)
	{
		if(*s == c)
			last = s;
		s++;
	}
	if (*s == c)
		last = s;
	return (last);
}
