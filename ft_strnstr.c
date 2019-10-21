/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:20:44 by loamar            #+#    #+#             */
/*   Updated: 2019/10/15 19:20:40 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	size_t	pos2;
	char	*hay;

	hay = (char *)haystack;
	pos = 0;
	pos2 = 0;
	if (needle[pos2] == '\0')
		return (hay);
	while (haystack[pos] && (pos < len))
	{
		while (haystack[pos] == needle[pos2] && (pos < len))
		{
			pos2++;
			if (needle[pos2] == '\0')
				return (hay + (pos - ft_strlen(needle) + 1));
			pos++;
		}
		if (haystack[pos] != needle[pos2])
			pos2 = 0;
		pos++;
	}
	return (NULL);
}
