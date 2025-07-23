/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:25:01 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/23 16:57:58 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "./tests/minunit.h"

static size_t count_str(const char *s, char c)
{
	size_t	count;
	size_t	pos;

	if (s == NULL)
		return (0);
	pos = 0;
	count = 0;
	while (s[pos])
	{
		if (pos == 0 && (s[pos] != c))
			count++;
		if (pos != 0 && (s[pos - 1] == c && s[pos] != c))
			count++;
		pos++;
	}
	return (count);
}

static char	*get_string(const char *s, char c, size_t *)

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	count;
	size_t	pos;
	size_t	next_str_pos;
	
	if (s == NULL)
		return (NULL);
	count = count_str(s, c);
	split = (char **)malloc( (count + 1) * sizeof(char *) );
	if (!split)
		return (NULL);
	pos = 0;
	next_str_pos = 0;
	while (pos < count)
	{
		split[pos] = get_string(s, c, &next_str_pos);
		pos++;
	}
	split[pos] = NULL;
}

MU_TEST(string_null)
{
	mu_assert_int_eq(0, count_str(NULL, ' '));
}

MU_TEST(string_void)
{
	mu_assert_int_eq(0, count_str("", ' '));
}

MU_TEST(string_start_with_seps)
{
	mu_assert_int_eq(3, count_str("   42 sao paulo", ' '));
}

MU_TEST(string_with_seps_in_middle)
{
	mu_assert_int_eq(5, count_str("meu nome nao e jhonny", ' '));
}

MU_TEST(with_multiple_seps)
{
	mu_assert_int_eq(5, count_str("   meu  nome       nao  e  jhonny     ", ' '));
}

MU_TEST_SUITE(count_t)
{
	MU_RUN_TEST(string_null);
	MU_RUN_TEST(string_void);
	MU_RUN_TEST(string_start_with_seps);
	MU_RUN_TEST(string_with_seps_in_middle);
	MU_RUN_TEST(with_multiple_seps);
}

int	main()
{
	MU_RUN_SUITE(count_t);
	MU_REPORT();
}