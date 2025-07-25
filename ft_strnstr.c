/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:36:08 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/22 14:36:56 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!ft_strlen(little))
		return ((char *)big);
	if (!ft_strlen(big) || !len)
		return (NULL);
	i = 0;
	while (i <= len - ft_strlen(little))
	{
		if (!ft_strncmp(&big[i], little, ft_strlen(little)))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include "./tests/minunit.h"

MU_TEST(ft_strncmp_1)
{
	char haystack[30] = "aaabcabcd";

	mu_assert_string_eq(NULL, ft_strnstr(haystack,"cd", 8));
}

int	main()
{
	MU_RUN_TEST(ft_strncmp_1);
	MU_REPORT();
}*/