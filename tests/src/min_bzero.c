#include "../../libft.h"
#include "minunit.h"

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

MU_TEST_SUITE(bzero_t)
{
	MU_RUN_TEST(bzero_NULL);
	MU_RUN_TEST(bzero_2);
	MU_RUN_TEST(bzero_4);
}