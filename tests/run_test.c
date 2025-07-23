/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:13:26 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/23 16:03:24 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

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

MU_TEST(test_itoa_0)
{
	char	expected[] = "0";
	char	*result = ft_itoa(0);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(test_itoa_forty_two)
{
	char	expected[] = "42";
	char	*result = ft_itoa(42);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(test_itoa_minus_forty_two)
{
	char	expected[] = "-42";
	char	*result = ft_itoa(-42);
	mu_assert_string_eq(expected, result);
	free(result);
}

MU_TEST(memmove_n_5)
{
	char	dest[]	= "coding";
	char	src[]	= "testing";
	char	*ret;

	char	expect[] = "testig";

	ret = ft_memcpy(dest, src, 5);

	mu_check(ft_strncmp(dest, expect, ft_strlen(expect)) == 0);
}

MU_TEST(bzero_t)
{
	char	dest[]	= "coding";
	char	*ret;

	char expect[] = "\0";

	ret = ft_bzero(dest, 5);

	mu_check(ft_strncmp(dest, expect, 1) == 0);
}

MU_TEST(test_NULL_string)
{
	mu_assert_int_eq(0, ft_strlen(NULL));
}

MU_TEST(test_void_string)
{
	mu_assert_int_eq(0, ft_strlen(""));
}

MU_TEST(test_strjoin_both_NULL)
{
	mu_assert_string_eq("\0", ft_strjoin(NULL, NULL));
}

MU_TEST(test_strjoin_s1_void_s2_NULL)
{
	mu_assert_string_eq("", ft_strjoin("", NULL));
}

MU_TEST(test_strjoin_s1_NULL_s2_void)
{
	mu_assert_string_eq("", ft_strjoin(NULL, ""));
}

MU_TEST(test_strjoin_two_strings)
{
	mu_assert_string_eq("forty-two", ft_strjoin("forty-", "two"));
}

MU_TEST(test_s_void)
{
	mu_assert_string_eq("", ft_substr("", 0, 1));
}

MU_TEST(test_s_NULL)
{
	mu_check( NULL == ft_substr(NULL, 1, 1));
}

MU_TEST(test_start_greater_than_len_s)
{
	mu_check( NULL == ft_substr("42campus", 10, 5));
}

MU_TEST(test_s_len_lower_than_len_and_start_less_than_s)
{
	mu_assert_string_eq("saopaulo", ft_substr("42campussaopaulo", 8, 20));
}

MU_TEST(test_s_len_higher_than_len_and_start_less_than_s)
{
	mu_assert_string_eq("campus", ft_substr("42campussaopaulo",2,6));
}

MU_TEST(test_s1_NULL)
{
	mu_assert_string_eq(NULL, ft_strtrim(NULL, "asmp"));
}

MU_TEST(test_set_NULL)
{
	mu_assert_string_eq("42campus", ft_strtrim("42campus", NULL));
}

MU_TEST(test_s1_void)
{
	mu_assert_string_eq("", ft_strtrim("", "asmp"));
}

MU_TEST(test_set_void)
{
	mu_assert_string_eq("42campus", ft_strtrim("42campus", ""));
}

MU_TEST(test_non_void_both_s1_and_set)
{
	mu_assert_string_eq("42cuoulo", ft_strtrim("42campussaopaulo", "asmp"));
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

MU_TEST_SUITE(ft_itoa_t)
{
	MU_RUN_TEST(test_itoa_0);
	MU_RUN_TEST(test_itoa_minus_forty_two);
	MU_RUN_TEST(test_itoa_forty_two);
}

MU_TEST_SUITE(strlen_t)
{
	MU_RUN_TEST(test_NULL_string);
	MU_RUN_TEST(test_void_string);
}

MU_TEST_SUITE(ft_strjoin_t)
{
	MU_RUN_TEST(test_strjoin_both_NULL);
	MU_RUN_TEST(test_strjoin_s1_void_s2_NULL);
	MU_RUN_TEST(test_strjoin_s1_NULL_s2_void);
	MU_RUN_TEST(test_strjoin_two_strings);
}

MU_TEST_SUITE(ft_substr_t)
{
	MU_RUN_TEST(test_s_void);
	MU_RUN_TEST(test_s_NULL);
	MU_RUN_TEST(test_start_greater_than_len_s);
	MU_RUN_TEST(test_s_len_lower_than_len_and_start_less_than_s);
	MU_RUN_TEST(test_s_len_higher_than_len_and_start_less_than_s);
}

MU_TEST_SUITE(ft_strtrim_t)
{
	MU_RUN_TEST(test_s1_NULL);
	MU_RUN_TEST(test_set_NULL);
	MU_RUN_TEST(test_s1_void);
	MU_RUN_TEST(test_set_void);
	MU_RUN_TEST(test_non_void_both_s1_and_set);
}

int	main()
{
	ft_putendl_fd("Testing ft_strlen...", 1);
	MU_RUN_SUITE(strlen_t);
	ft_putendl_fd("\nTesting ft_memcpy...", 1);
	MU_RUN_SUITE(memmove_t);
	ft_putendl_fd("\nTesting ft_atoi...", 1);
	MU_RUN_SUITE(atoi_t);
	ft_putendl_fd("\nTesting ft_itoa...", 1);
	MU_RUN_SUITE(ft_itoa_t);
	ft_putendl_fd("\nTesting ft_strjoin...", 1);
	MU_RUN_SUITE(ft_strjoin_t);
	ft_putendl_fd("\nTesting ft_substr...", 1);
	MU_RUN_SUITE(ft_substr_t);
	ft_putendl_fd("\nTesting ft_subtrim...", 1);
	MU_RUN_SUITE(ft_strtrim_t);
	MU_REPORT();
	
	return MU_EXIT_CODE;
}
