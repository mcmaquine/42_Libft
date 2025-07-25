#include "../../libft.h"
#include "minunit.h"

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