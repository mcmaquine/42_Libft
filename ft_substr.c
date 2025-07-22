/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:55:12 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/22 17:22:48 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates memory (using malloc(3)) and returns a substring from the string 's'
The substring starts at index 'start' and has a maximum length of 'len'.
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	if (s == NULL)
		return (NULL);
}