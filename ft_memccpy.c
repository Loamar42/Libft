/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:22:07 by loamar            #+#    #+#             */
/*   Updated: 2019/10/14 15:36:34 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;
	size_t			pos;

	pos = 0;
	str_dst = (unsigned char *)dst;
	str_src = (unsigned char *)src;
	if (!dst || !src || !c || !n)
		return (NULL);
	while (pos < n)
	{
		if (str_src[pos] == (unsigned char)c)
		{
			str_dst[pos] = str_src[pos];
			pos++;
			return (str_dst + pos);
		}
		str_dst[pos] = str_src[pos];
		pos++;
	}
	return (NULL);
}
