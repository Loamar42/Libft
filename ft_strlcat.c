/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:53:29 by loamar            #+#    #+#             */
/*   Updated: 2019/10/15 18:15:39 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	i;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dstsize <= dst_length)
		return (src_length + dstsize);
	else
	{
		i = 0;
		while ((dst_length + i < dstsize - 1) && src[i] != '\0')
		{
			dst[dst_length + i] = src[i];
			i++;
		}
		dst[dst_length + i] = '\0';
		return (dst_length + src_length);
	}
}
