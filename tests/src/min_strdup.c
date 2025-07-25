#include "../../libft.h"
#include "minunit.h"

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

MU_TEST_SUITE(ft_strdup_t)
{
	MU_RUN_TEST(dup_42sp);
	MU_RUN_TEST(dup_void);
}