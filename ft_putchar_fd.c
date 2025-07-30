/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:51:59 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/30 11:11:14 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Outputs a character 'c' to the specified file descriptor 'fd'
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
