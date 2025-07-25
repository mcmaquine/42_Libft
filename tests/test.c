/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:13:26 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/25 15:44:58 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "src/min_bzero.c"
#include "src/min_strlen.c"
#include "src/min_memmove.c"
#include "src/min_atoi.c"
#include "src/min_itoa.c"
#include "src/min_strjoin.c"
#include "src/min_substr.c"
#include "src/min_strtrim.c"
#include "src/min_split.c"
#include "src/min_calloc.c"
#include "src/min_strdup.c"
#include "src/min_striteri.c"

/************************************************************
//			
//						TEST SUITS
//
//*************************************************************/

void	mandatory()
{
	ft_putendl_fd("Testing ft_bzero...", 1);
	MU_RUN_SUITE(bzero_t);
	ft_putendl_fd("\nTesting ft_strlen...", 1);
	MU_RUN_SUITE(strlen_t);
	ft_putendl_fd("\nTesting ft_memcpy...", 1);
	MU_RUN_SUITE(memmove_t);
	ft_putendl_fd("\nTesting ft_atoi...", 1);
	MU_RUN_SUITE(atoi_t);
	ft_putendl_fd("\nTesting ft_itoa...", 1);
	MU_RUN_SUITE(ft_itoa_t);
	ft_putendl_fd("\nTesting ft_strjoin...", 1);
	MU_RUN_SUITE(ft_strjoin_t);
	ft_putendl_fd("\nTesting ft_substr...", 1);
	MU_RUN_SUITE(ft_substr_t);
	ft_putendl_fd("\nTesting ft_subtrim...", 1);
	MU_RUN_SUITE(ft_strtrim_t);
	ft_putendl_fd("\nTesting ft_split...", 1);
	MU_RUN_SUITE(ft_split_t);
	ft_putendl_fd("\nTesting ft_calloc...", 1);
	MU_RUN_SUITE(ft_calloc_t);
	ft_putendl_fd("\nTesting ft_strdup...", 1);
	MU_RUN_SUITE(ft_strdup_t);
	ft_putendl_fd("\nTesting ft_striteri...", 1);
	MU_RUN_SUITE(ft_striteri_t);
	MU_REPORT();
}

void bonus()
{
	//Must implement tests for bonus
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		mandatory();
	else if (argc == 2)
	{
		if (atoi(argv[1]) == 1)
			bonus();
		else
			ft_putendl_fd("\nOption invalid", 1);
	}
	return MU_EXIT_CODE;
}
