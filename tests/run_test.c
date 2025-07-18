/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:13:26 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/18 19:13:29 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>
#include <stdio.h>

MU_TEST(test_atoi_42_to_int_42)
{
	char	input[] 	=	"42";
	int		expected	=	42;
	int		result;

	result = ft_atoi(input);
	mu_assert_int_eq(expected, result);
}

MU_TEST(test_atoi_w_space_42_to_int_42)
{
	char	input[] 	=	"  42";
	int		expected	=	42;
	int		result;

	result = ft_atoi(input);
	mu_assert_int_eq(expected, result);
}

MU_TEST(test_atoi_w_special_space_42_to_int_42)
{
	char	input[] 	=	" \t 42";
	int		expected	=	42;
	int		result;

	result = ft_atoi(input);
	mu_assert_int_eq(expected, result);
}

MU_TEST(test_atoi_minus_1_to_int_minus_1)
{
	char	input[] 	=	"-1";
	int		expected	=	-1;
	int		result;

	result = ft_atoi(input);
	mu_assert_int_eq(expected, result);
}

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
}

MU_TEST_SUITE(atoi_t)
{
	MU_RUN_TEST(test_atoi_42_to_int_42);
	MU_RUN_TEST(test_atoi_minus_1_to_int_minus_1);
	MU_RUN_TEST(test_atoi_w_space_42_to_int_42);
	MU_RUN_TEST(test_atoi_w_special_space_42_to_int_42);
}

int	main()
{
	MU_RUN_SUITE(memmove_t);
	MU_RUN_SUITE(atoi_t);
	MU_REPORT();
	return MU_EXIT_CODE;
}
