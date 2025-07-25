#include "../../libft.h"
#include "minunit.h"

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