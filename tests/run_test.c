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

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_w_space_42_to_int_42)
{
	char	input[] 	=	"       42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_w_special_spaces_42_to_int_42)
{
	char	input[] 	=	" \t\v\n\r\f42";

	mu_assert_int_eq(atoi(input), atoi(input));
}

MU_TEST(test_atoi_minus_1_to_int_minus_1)
{
	char	input[] 	=	"-1";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_minus_minus_42)
{
	char	input[] 	=	"--42";

	mu_assert_int_eq(atoi(input), atoi(input));
}

MU_TEST(test_atoi_minus_1000042)
{
	char	input[] 	=	"-1000042";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_minus_plus_42)
{
	char	input[] 	=	"-+42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_plus_minus_42)
{
	char	input[] 	=	"+-42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_plus_plus_42)
{
	char	input[] 	=	"++42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_minus_space_42)
{
	char	input[] 	=	"- 42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_plus_space_42)
{
	char	input[] 	=	"+ 42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_minus_newline_42)
{
	char	input[] 	=	"-\n42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_4242)
{
	char	input[] 	=	"4242";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_42_slash_2)
{
	char	input[] 	=	"42/2";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_42_colon_2)
{
	char	input[] 	=	"42;2";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_INT_MAX)
{
	char	input[] 	=	"2147483647";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_INT_MIN)
{
	char	input[] = "-2147483648";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
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
	MU_RUN_TEST(test_atoi_w_special_spaces_42_to_int_42);
	MU_RUN_TEST(test_atoi_minus_minus_42);
	MU_RUN_TEST(test_atoi_minus_1000042);
	MU_RUN_TEST(test_atoi_minus_plus_42);
	MU_RUN_TEST(test_atoi_plus_minus_42);
	MU_RUN_TEST(test_atoi_plus_plus_42);
	MU_RUN_TEST(test_atoi_minus_space_42);
	MU_RUN_TEST(test_atoi_plus_space_42);
	MU_RUN_TEST(test_atoi_minus_newline_42);
	MU_RUN_TEST(test_atoi_4242);
	MU_RUN_TEST(test_atoi_42_slash_2);
	MU_RUN_TEST(test_atoi_42_colon_2);
	MU_RUN_TEST(test_atoi_INT_MAX);
	MU_RUN_TEST(test_atoi_INT_MIN);
}

int	main()
{
	MU_RUN_SUITE(memmove_t);
	MU_RUN_SUITE(atoi_t);
	MU_REPORT();
	return MU_EXIT_CODE;
}
