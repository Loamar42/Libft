/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:04:16 by loamar            #+#    #+#             */
/*   Updated: 2019/10/18 20:05:22 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			pos;
	unsigned char	*str_dst;
	unsigned char	*str_src;

	str_dst = dst;
	str_src = (unsigned char *)src;
	if (str_dst == str_src)
		return (dst);
	if (str_dst > str_src)
	{
		pos = len;
		while (pos--)
			str_dst[pos] = str_src[pos];
	}
	else
	{
		pos = 0;
		while (pos < len)
		{
			str_dst[pos] = str_src[pos];
			pos++;
		}
	}
	return (dst);
}
