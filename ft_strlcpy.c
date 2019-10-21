/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:33:38 by loamar            #+#    #+#             */
/*   Updated: 2019/10/15 16:44:38 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	pos;

	pos = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (--dstsize && src[pos])
	{
		dst[pos] = src[pos];
		++pos;
	}
	dst[pos] = '\0';
	return (ft_strlen(src));
}
