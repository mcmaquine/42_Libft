#include "../../libft.h"
#include "minunit.h"

MU_TEST(test_atoi_42_to_int_42)
{
	char	input[] 	=	"42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_w_space_42_to_int_42)
{
	char	input[] 	=	"       42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_w_special_spaces_42_to_int_42)
{
	char	input[] 	=	" \t\v\n\r\f42";

	mu_assert_int_eq(atoi(input), atoi(input));
}

MU_TEST(test_atoi_minus_1_to_int_minus_1)
{
	char	input[] 	=	"-1";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_minus_minus_42)
{
	char	input[] 	=	"--42";

	mu_assert_int_eq(atoi(input), atoi(input));
}

MU_TEST(test_atoi_minus_1000042)
{
	char	input[] 	=	"-1000042";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_minus_plus_42)
{
	char	input[] 	=	"-+42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_plus_minus_42)
{
	char	input[] 	=	"+-42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_plus_plus_42)
{
	char	input[] 	=	"++42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_minus_space_42)
{
	char	input[] 	=	"- 42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_plus_space_42)
{
	char	input[] 	=	"+ 42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_minus_newline_42)
{
	char	input[] 	=	"-\n42";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_4242)
{
	char	input[] 	=	"4242";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_42_slash_2)
{
	char	input[] 	=	"42/2";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_42_colon_2)
{
	char	input[] 	=	"42;2";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_INT_MAX)
{
	char	input[] 	=	"2147483647";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST(test_atoi_INT_MIN)
{
	char	input[] = "-2147483648";

	mu_assert_int_eq(atoi(input), ft_atoi(input));
}

MU_TEST_SUITE(atoi_t)
{
	MU_RUN_TEST(test_atoi_42_to_int_42);
	MU_RUN_TEST(test_atoi_minus_1_to_int_minus_1);
	MU_RUN_TEST(test_atoi_w_space_42_to_int_42);
	MU_RUN_TEST(test_atoi_w_special_spaces_42_to_int_42);
	MU_RUN_TEST(test_atoi_minus_minus_42);
	MU_RUN_TEST(test_atoi_minus_1000042);
	MU_RUN_TEST(test_atoi_minus_plus_42);
	MU_RUN_TEST(test_atoi_plus_minus_42);
	MU_RUN_TEST(test_atoi_plus_plus_42);
	MU_RUN_TEST(test_atoi_minus_space_42);
	MU_RUN_TEST(test_atoi_plus_space_42);
	MU_RUN_TEST(test_atoi_minus_newline_42);
	MU_RUN_TEST(test_atoi_4242);
	MU_RUN_TEST(test_atoi_42_slash_2);
	MU_RUN_TEST(test_atoi_42_colon_2);
	MU_RUN_TEST(test_atoi_INT_MAX);
	MU_RUN_TEST(test_atoi_INT_MIN);
}