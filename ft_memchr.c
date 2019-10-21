/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:19:15 by loamar            #+#    #+#             */
/*   Updated: 2019/10/15 14:21:59 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*str;
	size_t			pos;

	a = (unsigned char)c;
	str = (unsigned char *)s;
	pos = 0;
	while (n--)
	{
		if (str[pos] == a)
			return (str + pos);
		pos++;
	}
	return (NULL);
}
