/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:33:48 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/22 16:50:22 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates memory (using malloc(3)) and returns a string representing the
integer received as an argument. Negative members must be handled.
*/

static void	ft_getnumber(int n, char *num, size_t *pos)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ln = -ln;
		num[*pos] = '-';
		(*pos)++;
	}
	if (ln >= 10)
	{
		ft_getnumber(ln / 10, num, pos);
		ft_getnumber(ln % 10, num, pos);
	}
	if (ln < 10)
	{
		num[*pos] = ln + '0';
		(*pos)++;
	}
}

char	*ft_itoa(int n)
{
	char	num[12];
	char	*nstr;
	size_t	i;

	i = 0;
	ft_getnumber(n, num, &i);
	nstr = (char *)malloc((i + 1) * sizeof(char));
	if (!nstr)
		return (NULL);
	nstr = ft_memcpy(nstr, num, i);
	nstr[++i] = '\0';
	return (nstr);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n\n", ft_itoa(0));
}*/
