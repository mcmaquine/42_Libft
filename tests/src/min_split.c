#include "../../libft.h"
#include "minunit.h"

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

MU_TEST_SUITE(ft_split_t)
{
	MU_RUN_TEST(get_string_42);
	MU_RUN_TEST(get_string_sao);
	MU_RUN_TEST(get_string_paulo);
	MU_RUN_TEST(full_split);
}