/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaquine <mmaquine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:29:36 by mmaquine          #+#    #+#             */
/*   Updated: 2025/07/18 10:43:41 by mmaquine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks wether c is a 7-bit unsigned char value that fits into the ASCII
//character set.
int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (c);
	else
		return (0);
}
