#include "../../libft.h"
#include "minunit.h"

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

MU_TEST_SUITE(ft_itoa_t)
{
	MU_RUN_TEST(test_itoa_0);
	MU_RUN_TEST(test_itoa_minus_forty_two);
	MU_RUN_TEST(test_itoa_forty_two);
}