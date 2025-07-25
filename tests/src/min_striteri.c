#include "../../libft.h"
#include "minunit.h"

void	to_upper_if_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && (*c >= 'a' && *c <= 'z'))
		*c = *c ^ 0x20;	
}

void	change_case_if_odd(unsigned int i, char *c)
{
	if (i % 2 != 0 && ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z')))
		*c = *c ^ 0x20;
}

MU_TEST(striteri_f_null)
{
	char	str[] = "42";
	
	ft_striteri(str, NULL);
	mu_assert_string_eq("42", str);
}

MU_TEST(striteri_to_upper_even)
{
	char	str[] = "sao paulo";
	
	ft_striteri(str, to_upper_if_even);
	mu_assert_string_eq("SaO PaUlO", str);
}

MU_TEST(striteri_change_case_if_odd)
{
	char	str[] = "sao paulo";

	ft_striteri(str, change_case_if_odd);
	mu_assert_string_eq("sAo pAuLo", str);
}

MU_TEST_SUITE(ft_striteri_t)
{
	MU_RUN_TEST(striteri_f_null);
	MU_RUN_TEST(striteri_to_upper_even);
	MU_RUN_TEST(striteri_change_case_if_odd);
}