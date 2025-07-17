/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:57:32 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/17 14:34:47 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>
#include <stdio.h>

MU_TEST(memmove_n_5)
{
	char	dest[]	= "coding";
	char	src[]	= "testing";
	char	*ret;

	char	expect[] = "testig";

	ret = ft_memcpy(dest, src, 5);

	mu_check(ft_strcmp(dest, expect) == 0);
}

MU_TEST(bzero_t)
{
	char	dest[]	= "coding";
	char	*ret;

	char expect[] = "\0";

	ret = ft_bzero(dest, 5);

	mu_check(ft_strcmp(dest, expect) == 0);
}

MU_TEST_SUITE(memmove_t)
{
	MU_RUN_TEST(memmove_n_5);
	MU_RUN_TEST(bzero_t);
}

int	main()
{
	MU_RUN_SUITE(memmove_t);
	MU_REPORT();
	return MU_EXIT_CODE;
}
