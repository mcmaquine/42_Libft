#include "../../libft.h"
#include "minunit.h"

MU_TEST(memmove_n_5)
{
	char	dest[]	= "coding";
	char	src[]	= "testing";
	char	*ret;

	char	expect[] = "testig";

	ret = ft_memcpy(dest, src, 5);

	mu_check(ft_strncmp(dest, expect, ft_strlen(expect)) == 0);
}

MU_TEST_SUITE(memmove_t)
{
	MU_RUN_TEST(memmove_n_5);
}