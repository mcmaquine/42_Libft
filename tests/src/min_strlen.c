#include "../../libft.h"
#include "minunit.h"

MU_TEST(test_NULL_string)
{
	mu_assert_int_eq(0, ft_strlen(NULL));
}

MU_TEST(test_void_string)
{
	mu_assert_int_eq(0, ft_strlen(""));
}

MU_TEST_SUITE(strlen_t)
{
	MU_RUN_TEST(test_NULL_string);
	MU_RUN_TEST(test_void_string);
}