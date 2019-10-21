/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:27:11 by loamar            #+#    #+#             */
/*   Updated: 2019/10/15 18:52:49 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n && ((unsigned char)s1[pos] != '\0' ||
		(unsigned char)s2[pos] != '\0'))
	{
		if ((unsigned char)s1[pos] == (unsigned char)s2[pos])
			pos++;
		else
			return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
	}
	return (0);
}
