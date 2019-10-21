/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loamar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:25:19 by loamar            #+#    #+#             */
/*   Updated: 2019/10/20 18:50:40 by loamar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_isset(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	char		*res;
	size_t		pos;
	size_t		len;

	pos = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_isset(s1[pos], set) == 1)
		pos++;
	if (s1[pos] == '\0')
		return ("");
	str = ft_substr(s1, pos, len - pos);
	len = ft_strlen(str);
	while (ft_isset(str[len - 1], set) == 1)
		len--;
	res = ft_substr(str, 0, len);
	return (res);
}
