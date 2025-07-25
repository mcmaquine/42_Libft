/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:13:26 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/25 15:19:08 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"

void	to_upper_if_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && (*c >= 'a' && *c <= 'z'))
		*c = *c ^ 0x20;	
}

void	change_case_if_odd(unsigned int i, char *c)
{
	if (i % 2 != 0 && ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z')))
		*c = *c ^ 0x20;
}

MU_TEST(bzero_NULL)
{
	mu_check(NULL == ft_bzero(NULL, 4));
}

MU_TEST(bzero_4)
{
	int	v[] = {1, 5, 6};
	
	int *z = ft_bzero(&v[1], sizeof(int));
	mu_check(v[0] == 1 && v[1] == 0 && v[2] == 6);
}

MU_TEST(bzero_2)
{
	char	dest[]	= "coding";
	char	*ret;

	char expect[] = "\0";

	ret = ft_bzero(dest, 5);

	mu_check(ft_strncmp(dest, expect, 1) == 0);
}

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

MU_TEST(get_string_42)
{
	char	**split = ft_split("   42  sao  paulo",' ');
	mu_assert_string_eq("42", split[0]);
	free(split);
}

MU_TEST(get_string_sao)
{
	char	**split = ft_split("   42  sao  paulo",' ');
	mu_assert_string_eq("sao", split[1]);
	free(split);
}

MU_TEST(get_string_paulo)
{
	char	**split = ft_split("   42  sao  paulo",' ');
	mu_assert_string_eq("paulo", split[2]);
	free(split);
}

MU_TEST(full_split)
{
	char	**split = ft_split("   42  sao  paulo",' ');
	size_t	len = 0;

	while (split[len] != NULL)
		len++;
	mu_assert_int_eq(3, len);
	free(split);
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
	char *s = ft_substr("42campus", 10, 5);
	mu_assert_string_eq("" , s);
	free(s);
}

MU_TEST(test_s_len_lower_than_len_and_start_less_than_s)
{
	mu_assert_string_eq("saopaulo", ft_substr("42campussaopaulo", 8, 20));
}

MU_TEST(test_s_len_higher_than_len_and_start_less_than_s)
{
	mu_assert_string_eq("campus", ft_substr("42campussaopaulo",2,6));
}

MU_TEST(substr_42sp)
{
	char *s = ft_substr((char *)"42sp", 0, 1000);
	mu_assert_string_eq("42sp", s);
	free(s);
}

MU_TEST(substr_2)
{
	char *s = ft_substr((char *)"42sp", 1, 1);
	mu_assert_string_eq("2", s);
	free(s);
}

MU_TEST(substr_return_void)
{
	char *s = ft_substr((char *)"42sp", 20, 1);
	mu_assert_string_eq("", s);
	free(s);
}

MU_TEST(substr_return_void_2)
{
	char *s = ft_substr((char *)"4", 42, 1000);
	mu_assert_string_eq("", s);
	free(s);
}

MU_TEST(substr_0_to_9)
{
	char *s = ft_substr((char *)"0123456789", 9, 10);
	mu_assert_string_eq("9", s);
	free(s);
}

MU_TEST(substr_0_0)
{
	char *s = ft_substr("42sp", 0, 0);
	mu_assert_string_eq("", s);
	free(s);
}

MU_TEST(substr_les_haricots)
{
	char	*s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
	mu_assert_string_eq("LES HARICOTS !", s);
	free(s);
}

MU_TEST(substr_middle)
{
	char	*s = ft_substr("TEST", 1, 2);
	mu_assert_string_eq("ES", s);
	free(s);
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

MU_TEST(ft_calloc_both_0)
{
	void	*ptr;
	ptr = ft_calloc(0, 0);
	mu_check(ptr != NULL);
	free(ptr);
}

MU_TEST(ft_calloc_0_5)
{
	void *ptr;
	ptr = ft_calloc(0, 5);
	mu_check(ptr != NULL);
	free(ptr);
}

MU_TEST(ft_calloc_5_0)
{
	void *ptr;
	ptr = ft_calloc(5, 0);
	mu_check(ptr != NULL);
	free(ptr);
}

MU_TEST(ft_calloc_0_minus_5)
{
	void	*ptr;
	ptr = ft_calloc(0, -5);
	mu_check( ptr != NULL);
	free(ptr);
}

MU_TEST(ft_calloc_minus_5_0)
{
	void	*ptr;
	ptr = ft_calloc(-5, 0);
	mu_check( ptr != NULL);
	free(ptr);
}

MU_TEST(ft_calloc_SIZE_MAX_both)
{
	void	*ptr;
	ptr = ft_calloc(0xffffffffffffffff, 0xffffffffffffffff);
	mu_check(NULL == ptr);
}

MU_TEST(ft_calloc_INT_MAX_both)
{
	void	*ptr;
	ptr = ft_calloc(0x7fffffff, 0x7fffffff);
	mu_check(ptr == NULL);
}

MU_TEST(ft_calloc_minus_5_both)
{
	void	*ptr;
	ptr = ft_calloc(-5,-5);
	mu_check(NULL == ptr);
}

MU_TEST(ft_calloc_3_minus_5)
{
	mu_check(ft_calloc(3, -5) == NULL);
}

MU_TEST(ft_calloc_minus_5_3)
{
	mu_check(ft_calloc(-5, 3) == NULL);
}

MU_TEST(dup_42sp)
{
	char *s = ft_strdup((char *)"42sp");
	mu_assert_string_eq("42sp", s);
	free(s);
}

MU_TEST(dup_void)
{
	char *s = ft_strdup((char *)"");
	mu_assert_string_eq("", s);
	free(s);
}

MU_TEST(striteri_to_upper_even)
{
	char	str[] = "sao paulo";
	
	ft_striteri(str, to_upper_if_even);
	mu_assert_string_eq("SaO PaUlO", str);
}

MU_TEST(striteri_change_case_if_odd)
{
	char	str[] = "sao paulo";

	ft_striteri(str, change_case_if_odd);
	mu_assert_string_eq("sAo pAuLo", str);
}

MU_TEST(striteri_f_null)
{
	char	str[] = "42";
	
	ft_striteri(str, NULL);
	mu_assert_string_eq("42", str);
}

/************************************************************
//			
//						TEST SUITS
//
//*************************************************************/
MU_TEST_SUITE(bzero_t)
{
	MU_RUN_TEST(bzero_NULL);
	MU_RUN_TEST(bzero_2);
	MU_RUN_TEST(bzero_4);
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
	MU_RUN_TEST(substr_42sp);
	MU_RUN_TEST(substr_2);
	MU_RUN_TEST(substr_return_void);
	MU_RUN_TEST(substr_return_void);
	MU_RUN_TEST(substr_0_to_9);
	MU_RUN_TEST(substr_0_0);
	MU_RUN_TEST(substr_les_haricots);
	MU_RUN_TEST(substr_middle);
}

MU_TEST_SUITE(ft_strtrim_t)
{
	MU_RUN_TEST(test_s1_NULL);
	MU_RUN_TEST(test_set_NULL);
	MU_RUN_TEST(test_s1_void);
	MU_RUN_TEST(test_set_void);
	MU_RUN_TEST(test_non_void_both_s1_and_set);
}

MU_TEST_SUITE(ft_split_t)
{
	MU_RUN_TEST(get_string_42);
	MU_RUN_TEST(get_string_sao);
	MU_RUN_TEST(get_string_paulo);
	MU_RUN_TEST(full_split);
}

MU_TEST_SUITE(ft_calloc_t)
{
	MU_RUN_TEST(ft_calloc_both_0);
	MU_RUN_TEST(ft_calloc_0_5);
	MU_RUN_TEST(ft_calloc_5_0);
	MU_RUN_TEST(ft_calloc_0_minus_5);
	MU_RUN_TEST(ft_calloc_minus_5_0);
	MU_RUN_TEST(ft_calloc_SIZE_MAX_both);
	MU_RUN_TEST(ft_calloc_minus_5_both);
	MU_RUN_TEST(ft_calloc_INT_MAX_both);
	MU_RUN_TEST(ft_calloc_minus_5_both);
	MU_RUN_TEST(ft_calloc_3_minus_5);
	MU_RUN_TEST(ft_calloc_minus_5_3);
}

MU_TEST_SUITE(ft_strdup_t)
{
	MU_RUN_TEST(dup_42sp);
	MU_RUN_TEST(dup_void);
}

MU_TEST_SUITE(ft_striteri_t)
{
	MU_RUN_TEST(striteri_f_null);
	MU_RUN_TEST(striteri_to_upper_even);
	MU_RUN_TEST(striteri_change_case_if_odd);
}

void	mandatory()
{
	ft_putendl_fd("Testing ft_bzero...", 1);
	MU_RUN_SUITE(bzero_t);
	ft_putendl_fd("\nTesting ft_strlen...", 1);
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
	ft_putendl_fd("\nTesting ft_split...", 1);
	MU_RUN_SUITE(ft_split_t);
	ft_putendl_fd("\nTesting ft_calloc...", 1);
	MU_RUN_SUITE(ft_calloc_t);
	ft_putendl_fd("\nTesting ft_strdup...", 1);
	MU_RUN_SUITE(ft_strdup_t);
	ft_putendl_fd("\nTesting ft_striteri...", 1);
	MU_RUN_SUITE(ft_striteri_t);
	MU_REPORT();
}

void bonus()
{
	//Must implement tests for bonus
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		mandatory();
	else if (argc == 2)
	{
		if (atoi(argv[1]) == 1)
			bonus();
		else
			ft_putendl_fd("\nOption invalid", 1);
	}
	return MU_EXIT_CODE;
}
