/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:47:07 by loamar            #+#    #+#             */
/*   Updated: 2019/10/14 19:51:55 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*str1;
	unsigned char		*str2;
	size_t				pos;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	pos = 0;
	if (n == 0)
		return (0);
	while (str1[pos] == str2[pos] && (pos < (n - 1)))
		pos++;
	return (str1[pos] - str2[pos]);
}
