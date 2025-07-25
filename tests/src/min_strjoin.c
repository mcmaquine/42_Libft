#include "../../libft.h"
#include "minunit.h"

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

MU_TEST_SUITE(ft_strjoin_t)
{
	MU_RUN_TEST(test_strjoin_both_NULL);
	MU_RUN_TEST(test_strjoin_s1_void_s2_NULL);
	MU_RUN_TEST(test_strjoin_s1_NULL_s2_void);
	MU_RUN_TEST(test_strjoin_two_strings);
}