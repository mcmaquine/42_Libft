/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_test_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:54:52 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/22 17:43:12 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "minunit.h"
#include <stdlib.h>
#include <stdio.h>

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

int	main()
{
	ft_putendl_fd("Testing ft_itoa...", 1);
	MU_RUN_SUITE(ft_itoa_t);
	MU_REPORT();
	return MU_EXIT_CODE;
}