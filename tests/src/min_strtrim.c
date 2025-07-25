#include "../../libft.h"
#include "minunit.h"

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

MU_TEST_SUITE(ft_strtrim_t)
{
	MU_RUN_TEST(test_s1_NULL);
	MU_RUN_TEST(test_set_NULL);
	MU_RUN_TEST(test_s1_void);
	MU_RUN_TEST(test_set_void);
	MU_RUN_TEST(test_non_void_both_s1_and_set);
}