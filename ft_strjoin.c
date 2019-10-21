/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:07:31 by loamar            #+#    #+#             */
/*   Updated: 2019/10/14 10:53:13 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*res;
	size_t		pos;
	size_t		pos2;

	pos = 0;
	pos2 = 0;
	if (!(res = (char *)malloc(sizeof(char) *
	(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[pos2])
	{
		res[pos] = s1[pos2];
		pos++;
		pos2++;
	}
	pos2 = 0;
	while (s2[pos2])
	{
		res[pos] = s2[pos2];
		pos++;
		pos2++;
	}
	res[pos] = '\0';
	return (res);
}
