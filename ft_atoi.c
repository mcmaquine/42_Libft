/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:32:24 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/18 13:33:02 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_result(const char *nptr, int sigp, int sigm)
{
	int		result;
	size_t	i;

	result = 0;
	i = 0;
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		result = 10 * result + (nptr[i] - '0');
		i++;
	}
	if ((sigp + sigm) > 1)
		return (0);
	else if (sigm)
		return (-result);
	else
		return (result);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		result;
	int		sign_plus;
	int		sign_minus;

	i = 0;
	sign_plus = 0;
	sign_minus = 0;
	while (nptr[i] && ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' '))
		i++;
	while (nptr[i] && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign_minus++;
		if (nptr[i] == '+')
			sign_plus++;
		i++;
	}
	result = ft_atoi_result(&nptr[i], sign_plus, sign_minus);
	return (result);
}
